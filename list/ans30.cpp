#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main (){
    std::vector <int> nums = {10, 10, 10, 10, 20, 20, 20, 20, 40, 40, 50, 50, 30};
    std::map <int,int> buffer;

    for(int i=0; i<=nums.size(); i++){
         auto check = buffer.find(nums[i]);
         if (check == buffer.end()){
            buffer[nums[i]] = 0;
         }else{
            buffer[nums[i]] += 1;
            // check->second++;
         }
    }

    buffer.erase(0);

    std::cout << "{";
    for (auto it = buffer.begin(); it != buffer.end(); ++it) {
        std::cout << it->first << ": " << it->second;
        if (std::next(it) != buffer.end()) {
            std::cout << ", ";
        }
    }
    std::cout << "}" << std::endl;
   
}