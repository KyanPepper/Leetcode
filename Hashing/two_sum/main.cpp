#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(int, char**){
    std::cout << "Hello, from contains_duplicate!\n";
}


vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,int> hash;
     for(int i = 0; i< nums.size(); i++){
        hash[nums[i]] = i;
    }   
    for(int i = 0; i< nums.size(); i++){
        unordered_map<int,int>::iterator indice = hash.find(target - nums[i]);
        if(indice != hash.end() && indice->second != i){
            vector<int> indices = {i,indice->second};
            return indices;
        }
    }
    return {};
        
}   

