//program to sort a list of nested dictionaries

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <tuple>



std::vector<std::map<std::string, std::map<std::string, int>>> my_list = {
    {
        {"key", {{"subkey", 1}}}
    },
    {
        {"key", {{"subkey", 10}}}
    },
    {
        {"key", {{"subkey", 5}}}
    }
};


int main(){
    for (int i = 0; i<my_list.size(); i++){
        for (int j = 0; j<my_list.size()-i-1; j++){
            if (my_list[j]["key"]["subkey"] < my_list[j+1]["key"]["subkey"]){
                int first = my_list[j]["key"]["subkey"];
                my_list[j]["key"]["subkey"] = my_list[j+1]["key"]["subkey"];
                my_list[j+1]["key"]["subkey"] = first;
            }
             
        }
    }
    
    for (const auto& outer_map : my_list) {
        for (const auto& inner_map : outer_map) {
            std::cout << "Key: " << inner_map.first << std::endl;
            for (const auto& subkey_pair : inner_map.second) {
                std::cout << "Subkey: " << subkey_pair.first << ", Value: " << subkey_pair.second << std::endl;
            }
        }
    }

   
}