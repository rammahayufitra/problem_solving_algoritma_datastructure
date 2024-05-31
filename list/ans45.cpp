#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::pair<int, int>> nums = {{1, 2}, {3, 4}, {1, 2}, {5, 6}, {7, 8}, {1, 2}, {3, 4}, {3, 4}, {7, 8}, {9, 10}};
    std::vector<int> buffer; 
    
    for (const auto& pair : nums) {
        auto it_first = std::find(buffer.begin(), buffer.end(), pair.first);
        if (it_first == buffer.end()) { // If the element is not found in buffer
            buffer.push_back(pair.first); // Add it to buffer
        }
        auto it_second = std::find(buffer.begin(), buffer.end(), pair.second);
        if (it_second == buffer.end()) { // If the element is not found in buffer
            buffer.push_back(pair.second); // Add it to buffer
        }
    }
    std::cout << "[";
    for (int i = 0; i<buffer.size(); i++){
        std::cout << buffer[i];
        if(i != buffer.size()-1){
            std::cout << ", "; 
        }
    }
    std::cout << "]" <<std::endl;
    
    // Now buffer contains unique elements from the first elements of the pairs in nums
    // You can print buffer or perform other operations here
    
    return 0;
}
