// Write a C++ program to change every letter in a given string with the letter following it in the alphabe

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

int main(){
    // input
    std::string input = "apexzaptui";

    std::cout << "before: " <<input << std::endl;
    
    // step 1 : create mapping
    std::map <char, char> mapping_char; 
    mapping_char['a'] = 'b';
    mapping_char['p'] = 'q';
    mapping_char['z'] = 'a';

    // step 3 : change c if it find in mapping_char. input change as in-place
    for (char &c : input){
        if (mapping_char.find(c) != mapping_char.end()){
            c = mapping_char[c];
        }
    }

    
    std::cout << "after : " <<input << std::endl;

}