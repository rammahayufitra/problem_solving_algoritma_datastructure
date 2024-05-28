//create multiple lists

#include<iostream>
#include<map>
#include<vector>

int main(){
    std::map<int, std::vector<int>> mymap; 

    for (int i = 0; i<10; i++){
        mymap[i] = std::vector<int>();
    }
    std::cout << "{";
    for(const auto& pair : mymap){
        std::cout << pair.first<< ": [";
        for (const auto& element :  pair.second){
            std::cout << element;
        }
        std::cout << "],";
    }
    std::cout << "}" << std::endl;


}