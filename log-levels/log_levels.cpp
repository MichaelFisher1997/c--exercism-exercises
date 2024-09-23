#include <string>
#include <iostream>
using namespace std;

namespace log_line {
    std::string message(std::string line) {
        // return the message
        int pos = line.find(" ");
        cout << line.substr(pos+1);
        return line.substr(pos+1);
    }

    std::string log_level(std::string line) {
        // return the log level
        int start = line.find("[")+1;
        int end = line.rfind("]")-1;
        cout << line.substr(start, end);
        return line.substr(start, end);
    }

    std::string reformat(std::string line) {
        // return the reformatted message
        return message(line) + " (" +
        log_level(line) + ")"; 
    }
}
