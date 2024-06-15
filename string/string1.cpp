//  Write program to reverse a given string.

#include <iostream>
#include <string>
#include <algorithm>

int main(){

    std::string input = "rananum"; 

    // method 1
    std::string output = "";
    
    for(int i = input.size(); i>-1; i--){
        output += input[i];
    }

    std::cout << "method 1 : " << output << std::endl;

    // method 2 

    std::reverse(input.begin(), input.end());

    std::cout << "method 2 : " << input << std::endl;

}