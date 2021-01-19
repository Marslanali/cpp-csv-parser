//
// Created by arslanali on 9/3/20.
//

#ifndef READING_CSV_CPP_TESTCSVCLASS_H
#define READING_CSV_CPP_TESTCSVCLASS_H

#include <string>
#include <iostream>
#include <armadillo>
#include <stdio.h>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <boost/algorithm/string.hpp>

class CSVReader
{
    std::string filePath_;
    std::string delimeter_;

public:
    CSVReader(std::string filePath, std::string delimeter = ",") :
              filePath_(filePath),delimeter_(delimeter)
    { }

    // Function to fetch data from a CSV File
    std::vector<std::vector<std::string> > getData();
};




#endif //READING_CSV_CPP_TESTCSVCLASS_H
