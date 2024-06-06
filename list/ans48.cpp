// Define a list 'colors' containing sublists, each with a single color name
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> colors = {{"Red"},{"Green"},{"Black"}};



int main(){
    for (std::string &item : colors){
        std::cout << "[";
        std::cout << item;
        std::cout << "]"<< std::endl;
    }
}