/**
 * @brief  This file is part of csv_parser, a C++ parser for CSV files read and
 * write.
 * @file  cpp_csv_parser.cpp
 * @date  9/3/2020 -- Revised 20/01/2021
 * @copyright
 * @author  Arslan Ali  <marslanali800@gmail.com>
 */

#include "../include/shared/cpp_csv_parser.h"

namespace csv_parser
{
/**
 * @brief get_data method
 * @return  std::vector<std::vector<std::string>>
 */
std::vector<std::vector<std::string>> CsvParser::get_data()
{
  std::string file_path = _file_path;

  std::ifstream file(file_path);

  if (!file)
    std::cerr << "Could not open the file!" << std::endl;
  else
  {
    std::vector<std::vector<std::string>> data_list;

    std::string line = "";
    // Iterate through each line and split the content using delimeter
    while (getline(file, line))
    {
      std::vector<std::string> vec;
      boost::algorithm::split(vec, line, boost::is_any_of(_delimeter));
      data_list.push_back(vec);
    }
    // Close the File
    file.close();

    return data_list;
  }
}
}  // namespace csv_parser
