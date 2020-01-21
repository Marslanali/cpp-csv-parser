// Created by arslan on 3/12/19.

/**
 * Reading and Writing CSV file in C++
 * Generate random matrix using C++ Armadillo library
 * and save in CSV file.
 */


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
    std::string fileName;
    std::string delimeter;

public:
    CSVReader(std::string filename, std::string delm = ",") :
            fileName(filename), delimeter(delm)
    { }

    // Function to fetch data from a CSV File
    std::vector<std::vector<std::string> > getData();
};


std::vector<std::vector<std::string> > CSVReader::getData()
{
    std::ifstream file(fileName);

    std::vector<std::vector<std::string> > dataList;

    std::string line = "";
    // Iterate through each line and split the content using delimeter
    while (getline(file, line))
    {
        std::vector<std::string> vec;
        boost::algorithm::split(vec, line, boost::is_any_of(delimeter));
        dataList.push_back(vec);
    }
    // Close the File
    file.close();

    return dataList;
}


int main(int argc, char** argv)
{

    int row_in, col_in, dim_in = 0;
    std::cout << "\n Enter number of rows, cols and dimen for input" << std::endl;

    std::cin >> row_in;
    std::cin >> col_in;
    std::cin >> dim_in;

    arma::Cube <double> data = arma::randu <arma::Cube <double>>(row_in, col_in, dim_in);

    std::string name;
    std::string dimen;
    std::string finalName;
    name = "testData";

    for (int i = 0; i < dim_in; i++)
    {
        // file pointer
        std::fstream fout;
        dimen = std::to_string(i) + ".csv";
        finalName = name + dimen;
        //std::cout << finalName << std::endl;

        // opens an csv file
        fout.open(finalName, std::ios::out);

        //	std::cout << "Matrix No: " << i << " \n" << data1.slice(i) << std::endl;

        for (int j = 0; j < arma::size(data, 0); j++)
        {
            for (int k = 0; k < arma::size(data, 1); k++)
            {
                arma::Mat<double> temp1 = data.slice(i);
                fout << temp1(j, i) << ", ";

            }

            fout << "\n";

        }

        fout.close();


    }

    std::cout << "\n Enter number of rows, cols and dimen for search list \n" << std::endl;

    int rows, cols, dimension;
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
    CSVReader reader(outputFileName);

    // Get the data from CSV File
    std::vector<std::vector<std::string>> dataList = reader.getData();

    // Print the content by search list
    std::vector<std::string> temp;
    temp = dataList[rows];
    std::cout << "return value: "<<temp[cols] << std::endl;

    return 0;
}
