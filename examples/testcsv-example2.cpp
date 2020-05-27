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
  std::string filePath;

  std::cin >> rows;
  std::cin >> cols;
  std::cout << "\n";
  filePath = "/home/arslanali/CLionProjects/reading-csv-cpp/build/testData0.csv";

  // Creating an object of CSVWriter
  CSVReader reader(filePath);

  // Get the data from CSV File
  std::vector<std::vector<std::string>> dataList = reader.getData();

  // Print the content by search list
  std::vector<std::string> temp;
  temp = dataList[rows];
  std::cout << "return value: " << temp[cols] << std::endl;

  return 0;
}