#include <iostream>
#include <vector>
#include <algorithm>



int main(){
    std::vector <int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector <int> odd; 

    for (auto &i : x){
        if (i % 2 == 1){
            odd.push_back(i);
        }
    }

    std::cout << "[";
    for(int i = 0; i<odd.size(); i++){
        std::cout << odd[i]; 
        if(i != odd.size()-1){
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    
}