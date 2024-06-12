#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

std::string input = "aabcdeef";

int main(){
    std::vector<char> buffer;
    std::map<char, int> dictionary;

    for (char &i : input){
        auto it = std::find(buffer.begin(), buffer.end(), i);
        if(it == buffer.end()){
            buffer.push_back(i);
            dictionary[i] = 0;
        }
        dictionary[i] += 1;
    }

    // std::cout<< " " << dictionary['a'] << std::endl;
    std::map<char, int>data;
    for(const auto &pair : dictionary){
        if (pair.second > 1){
            data[pair.first] = pair.second;
        }
    }

    if (data['a'] == data['c']){
        std::cout << "true" << std::endl;
        return true;
    }else{
        return false;
    }
}
