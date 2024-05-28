#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums = {11, 33, 50};
    
    std::string buffer = "";
    for(int i =0; i<nums.size(); i++){
        buffer += std::to_string(nums[i]);
    }

    std::cout << buffer << std::endl;
}