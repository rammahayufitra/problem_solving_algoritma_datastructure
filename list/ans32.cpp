#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums = {2, 4, 3, 5, 7};
    std::vector<int> test = {4,3};

    bool sublist  = false;

    if(test.empty() || test == nums){
        sublist = true;    
    }else if(test.size() > nums.size()){
        sublist = false;
    }else{
        for(int i = 0; i<=nums.size(); i++){
            if(nums[i] == test[0]){
                int n = 1;
                while(n < test.size() && nums[i+n]  == test[n] ){
                    n +=1;
                    if (n == test.size()){
                        sublist = true;
                    }else{
                        sublist = false;
                    }
                }
            }
        }   
    }

    std::cout << "[";
    for(int  i  = 0; i<test.size(); i++){
        std::cout << test[i];
        if(i != test.size()-1){
            std::cout << ", ";
        }
    }
    std::cout  << "] " << "is "<< sublist << " subset" <<  " of"<< " [";
    for(int  i  = 0; i<nums.size(); i++){
        std::cout << nums[i];
        if(i != nums.size()-1){
            std::cout << ", ";
        }
 
    }
    std::cout << "]"<<std::endl;
}