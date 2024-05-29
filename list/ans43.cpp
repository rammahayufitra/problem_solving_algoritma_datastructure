#include <iostream>
#include <vector>
#include <string>
#include <tuple>



int main(){

    std::tuple<std::string, std::string, std::string> color[] = {
        std::make_tuple("Black", "#000000", "rgb(0, 0, 0)"),
        std::make_tuple("Red", "#FF0000", "rgb(255, 0, 0)"),
        std::make_tuple("Yellow", "#FFFF00", "rgb(255, 255, 0)")
    };

    // Accessing individual items
    auto [item1_name, item1_hex, item1_rgb] = color[0];
    auto [item2_name, item2_hex, item2_rgb] = color[1];
    auto [item3_name, item3_hex, item3_rgb] = color[2];

    std::cout << item1_name << " " << item1_hex << " " << item1_rgb << std::endl;
    std::cout << item2_name << " " << item2_hex << " " << item2_rgb << std::endl;
    std::cout << item3_name << " " << item3_hex << " " << item3_rgb << std::endl;
}