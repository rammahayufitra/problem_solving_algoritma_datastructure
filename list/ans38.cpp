#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums = {0,1,2,3,4,5};
    for (int i = 0; i<nums.size(); i+=2){
        int first = nums[i];
        nums[i] = nums[i+1];
        nums[i+1] = first;
    }

    std::cout << "[";
    for(int i = 0; i<nums.size(); i++){
        std::cout << nums[i]; 
        if(i != nums.size()-1){
            std::cout << ", "; 
        }
    }
    std::cout << "]"<<std::endl;
}