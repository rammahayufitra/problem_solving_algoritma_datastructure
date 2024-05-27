#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    //std::vector <int> nums = {1, 2, -8, -2, 0, -2};
    //std::vector <int> nums = {1, 1, 0, 0, 2, -2, -2};
    std::vector <int> nums = {2,2}; 
    std::vector <int> buffer;

    for(int i=0;i<nums.size(); i++){
        auto it = std::find(buffer.begin(), buffer.end(), nums[i]);
        if(it == buffer.end()){
            buffer.push_back(nums[i]);
        }
    }

    for(int i = 0; i<buffer.size(); i++){
        for (int j = 0; j<buffer.size()-i-1; j++){
            if (buffer[j] > buffer[j+1]){
                // int one =  buffer[j];
                // buffer[j] = buffer[j+1];
                // buffer[j+1] = one;
                std::swap(buffer[j],buffer[j+1]);
                
            }
        }
    }

    if (buffer.size() <= 1){
        std::cout <<  "None" <<std::endl;
    }else{
        std::cout << "[";
        for(int i = 0;i<buffer.size();i++){
            std::cout << buffer[i];
            if(i != buffer.size()-1){
                std::cout<< ", ";
            }
        }
        std::cout << "] " << buffer[1] << std::endl;

    }
}