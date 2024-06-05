//program to insert an element before each element of a list.

#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::string> color = {"Red", "Green", "Black"};

    int newSize = color.size() * 2;
    color.resize(newSize);

    for (int i = newSize - 1; i >= 0; i -= 2) {
        color[i] = color[i / 2];
        color[i - 1] = "C";
    }

    std::cout << "[";
    for (int i = 0; i<newSize; i++){
        std::cout << color[i];
        if(i != newSize-1){
            std::cout << ", ";
        }
    }
    std::cout << "]"<< std::endl;
       
}
