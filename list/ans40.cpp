#include <iostream> 
#include <vector>
#include <string>


int main(){
    std::vector <std::string> data ={
        "be","have","do","say","get","make","go","know","take","see","come",
        "think","look","want","give","use","find","tell","ask","work","seem",
        "feel","leave","call"};

    
    for(int i = 0; i<data.size(); i++){
        for(int j = 0; j<data.size()-i-1; j++){
            char begin = data[j][0]; 
            char end   = data[j+1][0];
            if(begin > end){
                // std::string first = data[j]; 
                // data[j] = data[j+1]; 
                // data[j+1] = first;
                std::swap(data[j], data[j+1]);
            }
        }
    }

    std::cout << "{"; 
    for(int i = 0; i<data.size(); i++){
        std::cout << data[i];
        if(i != data.size()-1){
            std::cout << ", "; 
        }
    }
    std::cout << "}"<<std::endl;


}