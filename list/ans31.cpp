#include <iostream>
#include <vector>



int main(){
    std::vector <int> nums = {10, 20, 30, 40, 40, 40, 70, 80, 99};
    std::vector <int> buffer;

    for (int i = 0; i<nums.size(); i++){
        if (nums[i] >= 40 && nums[i] <= 100){
            buffer.push_back(nums[i]);
        }
    }
    std::cout <<  "element in buffer:  {";
    for (int i=0; i<buffer.size(); i++){
        std::cout << buffer[i];
        if (i  != buffer.size()-1){
            std::cout << ", ";
        }
    } 
    std::cout << "}"<< "number of list : " << buffer.size()<<std::endl;
}
