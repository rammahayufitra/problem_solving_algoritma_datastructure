// C++ program to check whether the characters e and g are separated by exactly 2 places anywhere in a given string at least
#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector <std::string> inputs = {"eagerer", "eaglets", "eardrop"};

    std::vector <std::string> buffer; 
    int count = 0;
    for (int i = 0; i<inputs.size(); i++){
        // std::cout << inputs[i] << std::endl;
        if (inputs[i][0] != 'e' || inputs[i][0] != 'g'){
            count += 1;
            
        }
    }

    std::cout << count;
}