// C++ program to capitalize the first letter of each word in a given string. Words must be separated by only one space. 

#include <iostream>
#include <string>

std::string capitalize_first_caracter (std::string input){
    for (int i = 0; i<input.size(); i++){
        if (i == 0 || input[i-1] == ' '){
            input[i] = std::toupper(input[i]);
        }
    }
    return input;
}

int main(){
    std::string input = "cpp string exercises"; 
    std::cout << capitalize_first_caracter(input) << std::endl;
}