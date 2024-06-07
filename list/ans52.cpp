//Define two lists 'color1' and 'color2' containing color names
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector <std::string> color1 = {"red", "orange", "green", "blue", "white"};
std::vector <std::string> color2 = {"black", "yellow", "green", "blue"};

std::vector <std::string> data1;  
std::vector <std::string> data2;

int main(){
    for(int i = 0; i< color1.size(); i++){
        auto check = std::find(color2.begin(), color2.end(), color1[i]);
        if (check == color2.end()){
            data1.push_back(color1[i]);
        }
    }

    for(int i = 0; i< color2.size(); i++){
        auto check = std::find(color1.begin(), color1.end(), color2[i]);
        if (check == color1.end()){
            data2.push_back(color2[i]);
        }
    }
   
   std::cout << "["; 
   for(int i = 0; i<data1.size(); i++){
        std::cout << data1[i]; 
        if(i != data1.size()-1){
            std::cout << ", "; 
        }
   }
   std::cout << "]" << std::endl;

   std::cout << "["; 
   for(int i = 0; i<data2.size(); i++){
        std::cout << data2[i]; 
        if(i != data2.size()-1){
            std::cout << ", "; 
        }
   }
   std::cout << "]" << std::endl;
}

