#include <iostream>
#include <string>
#include <vector>

std::string find_largest_word(std::string input){
    std::vector<std::string> buffer;
    std::string temp;

    for(int i = 0; i < input.size(); i++){
        if(input[i] != ' ' && input[i] != '-'){
            temp += input[i]; 
        } else {
            if(!temp.empty()){
                buffer.push_back(temp);
                temp.clear();
            }
        }
    }
    
    if(!temp.empty()){
        buffer.push_back(temp);
    }

    std::string largest_word;
    for(const auto& word : buffer){
        if(word.size() > largest_word.size()){
            largest_word = word;
        }
    }

    return largest_word;
}

int main(){
    std::string input = "C++ is a general-purpose programming language.";
    std::string largest_word = find_largest_word(input);
    std::cout << "The largest word is: " << largest_word << std::endl;
    
}
