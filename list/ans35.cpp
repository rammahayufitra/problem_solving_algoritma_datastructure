#include <iostream>
#include <vector>
#include <string>

int main(){
    
    std::vector <std::string> nums = {"p", "q"};
    std::vector <std::string> buffer; 
    int n = 5;

    int i = 1;
    while(i<=n){
        for(int j = 0; j<nums.size(); j++){
            buffer.push_back(nums[j]+std::to_string(i));
        }
        i += 1;
    }
    
    std::cout << "[";
    for(int j=0; j<buffer.size(); j++){
        std::cout << buffer[j];
        if (j != buffer.size()-1){
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
   

}