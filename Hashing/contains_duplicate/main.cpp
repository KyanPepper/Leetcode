#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(int, char**){
    std::cout << "Hello, from contains_duplicate!\n";
}


bool containsDuplicate(vector<int>& nums) {
    unordered_map<int,int> hash;
    for(int i = 0; i< nums.size(); i++){
        if(hash.find(nums[i]) == hash.end()){
           pair value = make_pair(nums[i],nums[i]);
            hash.insert(value);
        }else{
            return true;
        }
    }
    return false;
}

