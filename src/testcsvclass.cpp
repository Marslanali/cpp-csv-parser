//
// Created by arslanali on 9/3/20.
//

#include "testcsvclass.h"

std::vector<std::vector<std::string> > CSVReader::getData()
{
    std::string filePath = filePath_;

    std::ifstream file(filePath);

    if (!file)
        std::cerr << "Could not open the file!" << std::endl;
    else{
        std::vector<std::vector<std::string> > dataList;

        std::string line = "";
        // Iterate through each line and split the content using delimeter
        while (getline(file, line))
        {
            std::vector<std::string> vec;
            boost::algorithm::split(vec, line, boost::is_any_of(delimeter_));
            dataList.push_back(vec);
        }
        // Close the File
        file.close();

        return dataList;


    }


}


