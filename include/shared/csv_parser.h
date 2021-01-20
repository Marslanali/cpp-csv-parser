/**
 * @brief  This file is part of csv_parser, a C++ parser for CSV files read and
 * write.
 * @file  csv_parser.h
 * @date  9/3/2020 -- Revised 16/01/2021
 * @copyright
 * @author  Arslan Ali  <marslanali800@gmail.com>
 */

#ifndef READING_CSV_CPP_TESTCSVCLASS_H
#define READING_CSV_CPP_TESTCSVCLASS_H

#include <stdio.h>
#include <algorithm>
#include <boost/algorithm/string.hpp>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

class CsvParser
{
  std::string _file_path;
  std::string _delimeter;

 public:
  CsvParser(std::string file_path, std::string delimeter = ",") : _file_path(file_path), _delimeter(delimeter) {}

  // Function to fetch data from a CSV File
  std::vector<std::vector<std::string>> get_data();
};

#endif  // READING_CSV_CPP_TESTCSVCLASS_H
