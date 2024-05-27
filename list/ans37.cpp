#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<std::string> color1 = {"Red", "Green", "Orange", "White"};
    std::vector<std::string> color2 = {"Black", "Green", "White", "Pink"};

    std::vector<std::string> buffer;

    for (int i =0; i<color1.size(); i++){
        auto it  = std::find(color2.begin(),color2.end(), color1[i]);
        if(it != color2.end()){
            buffer.push_back(color1[i]);
        }
    }

    std::cout << "{'";
    for(int i = 0; i<buffer.size();i++){
        std::cout << buffer[i]<<"'";
        if(i  != buffer.size()-1){
            std::cout << ", ";
        }
    }

    std::cout<< "}"<<std::endl;






}