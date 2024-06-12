#include <iostream>
#include <string>

std::string input = "python count"; 


int main(){
    std::cout << input.size();
    int count = 0;
    for(int i = 0; i<input.size(); i++){
        if(input[i] == ' '){
            count++;
        }
        
    }
    count = count + 1;
    std::cout << count << std::endl;
}