#include <iostream>
#include <vector>
#include <string>
#include <map>

std::vector<std::vector<std::string>> colors = {{"Black", "Red", "Maroon", "Yellow"}, {"#000000", "#FF0000", "#800000", "#FFFF00"}};
std::vector<std::map<std::string, std::string>> dictionaries = {};


int main(){

    for(int i = 0; i<colors[0].size(); i++){
        std::map<std::string, std::string> data; 
        data["color_names"] = colors[0][i]; 
        data["color_code"]  = colors[1][i];
        dictionaries.push_back(data);
    }

    for (const auto& dictionary : dictionaries) {
        for (const auto& pair : dictionary) {
            std::cout << pair.first << ": " << pair.second << std::endl;
        }
        std::cout << std::endl;
    }

}