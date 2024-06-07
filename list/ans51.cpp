#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> data = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n"};
std::vector<std::vector<std::string>> buffer;
int step = 3;

int main(){
    
    for (int j = 0; j<step; j++){
        std::vector<std::string> result;
        for (int i = j; i<data.size(); i+=step){
            result.push_back(data[i]);
        }
        buffer.push_back(result);
    }

    std::cout << "[";
    for (size_t i = 0; i < buffer.size(); ++i) {
        std::cout << "[ ";
        for (size_t j = 0; j < buffer[i].size(); ++j) {
            std::cout << "'" << buffer[i][j] << "'";
            if (j < buffer[i].size() - 1) {
                std::cout << ",";
            }
            std::cout << " ";
        }
        std::cout << "]";
        if (i < buffer.size() - 1) {
            std::cout << ",";
        }
        // std::cout << "\n";
    }
    std::cout << "]" << std::endl;

   
    
}