//Find missing and additional values in two lists

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<char> list1 = {'a', 'b', 'c', 'd', 'e', 'f'}; 
std::vector<char> list2 = {'d', 'e', 'f', 'g', 'h'};

std::vector<char> missing;
std::vector<char> additional;

int main(){
    for(int i    =  0; i<list1.size(); i++){
        auto it  = std::find(list2.begin(),list2.end(), list1[i]);
        if(it != list1.end()){
            missing.push_back(list1[i]);
        }
    }
    
    for(int i    =  0; i<list2.size(); i++){
        auto it  = std::find(list1.begin(),list1.end(), list2[i]);
        if(it != list2.end()){
            additional.push_back(list2[i]);
        }
    }

    std::cout << "Missing :" << "[";
    for(int i =0; i<missing.size(); i++){
        std::cout << missing[i];
        if(i != missing.size()-1){
            std::cout << ", ";
        }
    }

    std::cout << "]" << " Additional : [";
    for(int i =0; i<additional.size(); i++){
        std::cout << additional[i];
        if(i != additional.size()-1){
            std::cout << ", ";
        }
    }
    std::cout << "]"  << std::endl;
}

