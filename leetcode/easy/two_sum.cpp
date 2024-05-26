#include<iostream>
#include<vector>
#include<map>

int main(){
    std::vector<int> nums = {2,7,11,15};
    int target = 9;

    std::map<int, int> seen;
    std::vector<int> result;

    for (int i = 0; i<nums.size(); i++){
        int complement = target - nums[i];
        if(seen.find(complement) != seen.end()){
            result.push_back(seen[complement]);
            result.push_back(i);
            // break;
        }
        seen[nums[i]] = i;
        
    }

    for(int i : result){std::cout << i << std::endl;}
     // Cetak seluruh isi peta seen
    std::cout << "seen:" << std::endl;
    for (auto const& pair : seen) {
        std::cout << pair.first << " : " << pair.second << std::endl;
    }
    return 0; 

}