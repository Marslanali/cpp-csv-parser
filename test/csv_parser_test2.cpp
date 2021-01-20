//
// Created by arslanali on 9/3/20.
//


/**
 * Reading and Writing CSV file in C++
 * Generate random matrix using C++ Armadillo library
 * and save in CSV file.
 */

#include <testcsvclass.h>

int main(int argc, char **argv) {

  std::cout << "\n Enter number of rows, cols and dimen for search list \n" << std::endl;

  int rows, cols;
  std::string file_path;

  std::cin >> rows;
  std::cin >> cols;
  std::cout << "\n";
  file_path = "/home/arslanali/CLionProjects/reading-csv-cpp/build/testData0.csv";

  // Creating an object of CSVWriter
  CsvParser reader(file_path);

  // Get the data from CSV File
  std::vector<std::vector<std::string>> data_list = reader.get_data();

  // Print the content by search list
  std::vector<std::string> temp;
  temp = data_list[rows];
  std::cout << "return value: " << temp[cols] << std::endl;

  return 0;
}