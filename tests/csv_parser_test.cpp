/**
 * @brief  This file is part of csv_parser, a C++ parser for CSV files read and
 * write.
 * @file  csv_parser_test1.cpp
 * @date  9/3/2020 -- Revised 20/01/2021
 * @copyright
 * @author  Arslan Ali  <marslanali800@gmail.com>
 */

#include <shared/cpp_csv_parser.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
/**
 * main function
 * @param argc  Total number of command line arguments
 * @param argv  Pointer to store command line arguments
 * @return
 */
int32_t main(int32_t argc, char **argv)
{
  if (argc != 2)
  {
    std::cerr << "Usage:  " << argv[0] << " CSV FILE PATH" << std::endl;
    return -1;
  }

  std::string file_path = argv[1];

  int32_t row_in, col_in, dim_in = 0;

  std::fstream fout;

  // opens csv file
  fout.open(file_path, std::ios::out);

  // Creating an object of CSVWriter
  csv_parser::CsvParser csv_read(file_path);

  // Get the data from CSV File
  std::vector<std::vector<std::string>> data_list = csv_read.get_data();
  std::cout << "\n Enter number of rows, cols and dimen for search list \n" << std::endl;
  std::cin >> row_in;
  std::cin >> col_in;
  std::cin >> dim_in;

  // Print the content by search list
  std::vector<std::string> temp;
  temp = data_list[0];
  std::cout << "return value: " << temp[1] << std::endl;

  fout.close();

  return 0;
}