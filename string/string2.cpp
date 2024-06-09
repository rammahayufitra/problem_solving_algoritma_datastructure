#include <iostream>
#include <string>
#include <vector>
#include <map>

std::string input = " w3resource";
std::map <char, char> mapping = {{"a", "b"}, {"p","q"}, {"z","a"}};


int main(){
 
    for (int i = 0; i<input.size(); i++){
        std::cout << mapping["a"];       
    }
}