// Write a program to capitalize the first letter of each word in a given string. Words must be separated by only one space. 

#include <iostream>
#include <string>


int main(){
    std::string txt = "python vs cpp"; 

    for(int i = 0; i<txt.size(); i++){
        if (i == 0 || txt[i-1] == ' '){
            txt[i] = std::toupper(txt[i]);
        }
    }

    std::cout << txt << std::endl;
}

