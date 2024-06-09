//Write a C++ program to reverse a given string. 
#include <iostream>
#include <string>

std::string input = "w3resource";

int main(){
    std::string back; 
    for (int i = input.size(); i>-1; i--){
        // std::cout << input[i] << std::endl;
        back += input[i];
    };

    std::cout << back << std::endl;

}