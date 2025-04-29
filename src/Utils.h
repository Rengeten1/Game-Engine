#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <vector>
#include <sstream>

namespace Utils {

    // String split function
    std::vector<std::string> split(const std::string& s, char delimiter) {
        std::vector<std::string> tokens;
        std::string token;
        std::istringstream tokenStream(s);
        while (std::getline(tokenStream, token, delimiter)) {
            tokens.push_back(token);
        }
        return tokens;
    }

    // String trim function
    std::string trim(const std::string& s) {
        size_t start = s.find_first_not_of(" \t\n\r\f\v");
        size_t end = s.find_last_not_of(" \t\n\r\f\v");
        return (start == std::string::npos) ? "" : s.substr(start, end - start + 1);
    }

    // Convert string to int
    int stringToInt(const std::string& s) {
        return std::stoi(s);
    }

    // Convert int to string
    std::string intToString(int value) {
        return std::to_string(value);
    }

}

#endif // UTILS_H
