#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> nums = {1, 2, 3, 4, 4};
    std::vector<int> buffer;
    for (int i = 0; i<nums.size(); i++){
        auto  it = std::find(buffer.begin(),buffer.end(),nums[i]);
        if(it == buffer.end()){
            buffer.push_back(nums[i]);
        }
    }

    std::cout << "[";
    for(int i = 0; i<buffer.size();i++){
        std::cout << buffer[i];
        if(i != buffer.size()-1){
            std::cout <<", ";
        }
    }
    std::cout<<"]"<<" "<< buffer[buffer.size()-2]<<std::endl;
}