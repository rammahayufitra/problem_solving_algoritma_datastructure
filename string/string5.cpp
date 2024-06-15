#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> lists = {"python", "BabA"}; 

    for (int i = 0; i < lists.size(); i++) {
        for (int j = 0; j < lists[i].size(); j++) {
            for (int k = 0; k < lists[i].size() - j - 1; k++) {
                // Check if both characters are letters (alphabetic)
                if (std::isalpha(lists[i][k]) && std::isalpha(lists[i][k + 1])) {
                    // Compare characters in lowercase to handle case insensitivity
                    if (std::tolower(lists[i][k]) > std::tolower(lists[i][k + 1])) {
                        // Swap characters
                        char temp = lists[i][k];
                        lists[i][k] = lists[i][k + 1];
                        lists[i][k + 1] = temp;
                    }
                }
            }
        }
    }

    // Print sorted strings
    for (const auto& str : lists) {
        std::cout << str << std::endl;
    }


    // methods 2:
    for (int i = 0; i < lists.size(); i++) {
        std::sort(lists[i].begin(), lists[i].end());
    }

    // Print sorted strings
    for (const auto& str : lists) {
        std::cout << str << std::endl;
    }

    return 0;
}
