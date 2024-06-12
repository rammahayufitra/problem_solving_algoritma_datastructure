//  C++ program to sort characters (numbers and punctuation symbols are not included) in a string. 
#include <iostream>
#include <string>
#include <algorithm>

std::string sort_character(std::string input){
    std::string result;
        
        // Extract only alphabetic characters
        for(char c : input) {
            if (std::isalpha(c)) {
                result += c;
            }
        }
        
    std::sort(result.begin(), result.end());
    return result;
}

int main(){
    std::string input = "python"; 
    std::cout << sort_character(input) << std::endl;

}