#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> data;

    for (int i = 0; i < 5; ++i) {
        std::vector<int> inner_list;
        for (int j = 1; j <= 5; ++j) {
            int value = 5 * i + j;
            inner_list.push_back(value);
        }
        data.push_back(inner_list);
    }


    std::cout << "["; 

    // Printing the generated 2D array
    for (const auto& row : data) {
        std::cout << "[";
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << "], ";
    }
    std::cout << "]" << std::endl;

    return 0;
}
