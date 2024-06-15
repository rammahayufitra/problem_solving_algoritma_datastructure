#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cctype> // for std::isalnum

int main() {
    std::string txt = "python-programming is easy to learn"; 
    
    std::map<std::vector<char>, int> mapping;
    std::vector<char> chr; 

    for (int i = 0; i < txt.size(); i++) {
        if (std::isalnum(txt[i])) {
            chr.push_back(txt[i]);
        } else {
            if (!chr.empty()) {
                mapping[chr] = chr.size();
                chr.clear();
            }
        }
    }

    // Add the last word if there is any
    if (!chr.empty()) {
        mapping[chr] = chr.size();
    }

    // Find the maximum size
    int maxSize = 0;
    for (const auto& pair : mapping) {
        if (pair.second > maxSize) {
            maxSize = pair.second;
        }
    }

    // Print words with the maximum size
    std::cout << "Word(s) with maximum size (" << maxSize << "):" << std::endl;
    for (const auto& pair : mapping) {
        if (pair.second == maxSize) {
            for (char c : pair.first) {
                std::cout << c;
            }
            std::cout << std::endl;
        }
    }

    return 0;
}
