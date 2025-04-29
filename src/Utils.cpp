#include "Utils.h"

namespace Utils {

    std::vector<std::string> split(const std::string& s, char delimiter) {
        std::vector<std::string> tokens;
        std::string token;
        std::istringstream tokenStream(s);
        while (std::getline(tokenStream, token, delimiter)) {
            tokens.push_back(token);
        }
        return tokens;
    }

    std::string trim(const std::string& s) {
        size_t start = s.find_first_not_of(" \t\n\r\f\v");
        size_t end = s.find_last_not_of(" \t\n\r\f\v");
        return (start == std::string::npos) ? "" : s.substr(start, end - start + 1);
    }

    int stringToInt(const std::string& s) {
        return std::stoi(s);
    }

    std::string intToString(int value) {
        return std::to_string(value);
    }

}
