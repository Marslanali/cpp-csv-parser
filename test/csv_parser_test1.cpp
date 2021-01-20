/**
 * @brief  This file is part of csv_parser, a C++ parser for CSV files read and
 * write.
 * @file  test_csv_parser.cpp
 * @date  9/3/2020 -- Revised 16/01/2021
 * @copyright
 * @author  Arslan Ali  <marslanali800@gmail.com>
 */

#include <test_csv_parser>

/**
 * main function
 * @param argc  Total number of command line arguments
 * @param argv  Pointer to store command line arguments
 * @return
 */
int32_t main(int32_t argc, char **argv)
{
  int32_t row_in, col_in, dim_in = 0;
  std::cout << "\n Enter number of rows, cols and dimen for input" << std::endl;

  std::cin >> row_in;
  std::cin >> col_in;
  std::cin >> dim_in;

  arma::Cube<double> data = arma::randu<arma::Cube<double>>(row_in, col_in, dim_in);

  std::string name;
  std::string dimen;
  std::string finalName;
  name = "testData";

  for (size_t i = 0; i < dim_in; i++)
  {
    // file pointer
    std::fstream fout;
    dimen = std::to_string(i) + ".csv";
    finalName = name + dimen;
    // std::cout << finalName << std::endl;

    // opens an csv file
    fout.open(finalName, std::ios::out);

    //	std::cout << "Matrix No: " << i << " \n" << data1.slice(i) << std::endl;

    for (size_t j = 0; j < arma::size(data, 0); j++)
    {
      for (size_t k = 0; k < arma::size(data, 1); k++)
      {
        arma::Mat<double> temp1 = data.slice(i);
        fout << temp1(j, i) << ", ";
      }

      fout << "\n";
    }

    fout.close();
  }

  std::cout << "\n Enter number of rows, cols and dimen for search list \n" << std::endl;

  int32_t rows, cols, dimension;
  std::string fileDimension;
  std::string fileName;
  std::string outputFileName;

  std::cin >> rows;
  std::cin >> cols;
  std::cin >> dimension;
  std::cout << "\n";
  fileName = "testData";
  fileDimension = std::to_string(dimension) + ".csv";
  outputFileName = fileName + fileDimension;

  // Creating an object of CSVWriter
  CsvParser reader(outputFileName);

  // Get the data from CSV File
  std::vector<std::vector<std::string>> data_list = reader.get_data();

  // Print the content by search list
  std::vector<std::string> temp;
  temp = data_list[rows];
  std::cout << "return value: " << temp[cols] << std::endl;

  return 0;
}