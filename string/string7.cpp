// C++ program to count all the vowels in a given string. 

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(){
    
    std::string input = "eagerer"; 
    
    std::string vowel = "aiueoAIUEO";    

    int count = 0;
    for(int i = 0; i<input.size(); i++){
        auto it = std::find(vowel.begin(), vowel.end(), input[i]);
            if(it != vowel.end()){
                std::cout << input[i] << std::endl;
                count += 1;
            }
        
    } 

    std::cout << count << std::endl;

}