#include "csvhandler.h"
#include <fstream>
#include <iostream>
#include <sstream>

CSVHandler :: CSVHandler(void) {

}

std::vector<std::vector<std::string>> CSVHandler :: readCSV(std::string fileName) {
    std::ifstream file(fileName);

    if(!file.is_open()) {
        std::cerr << "Failed to open the file" << std::endl;
        exit(1);
    }

    std::vector<std::vector<std::string>> fileContents;
    std::vector<std::string> line;

    std::string lineInput;

    while(std::getline(file, lineInput)) {
        std::stringstream ss(lineInput);
        std::string token;

        while(std::getline(ss, token, ',')) {
            line.push_back(token);
            //std::cout << token << " ";
        }
        fileContents.push_back(line);
        line.clear();
    }

    file.close();
    return fileContents;
}