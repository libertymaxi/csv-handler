#ifndef CSVHANDLER_H
#define CSVHANDLER_H

#include <vector>
#include <string>

class CSVHandler {
    public:
        CSVHandler(void);
        std::vector<std::vector<std::string>> readCSV(std::string);
};

#endif