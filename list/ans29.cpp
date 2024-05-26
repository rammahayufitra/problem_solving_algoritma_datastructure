#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> nums = {10, 20, 30, 40, 20, 50, 60, 40};
    std::vector<int> buffer;
    for(int i = 0; i<nums.size(); i++){
        auto it = std::find(buffer.begin(),buffer.end(),nums[i]);
        if (it == buffer.end()){
            buffer.push_back(nums[i]);
        }
    }

    std::cout << "Unique Element in List :" << "{";
    for(int i = 0;  i<buffer.size(); i++){
        std::cout << buffer[i];
        if(i != buffer.size()-1){
            std::cout << ", ";
        }
    }
     std::cout << "}"<<std::endl;
}