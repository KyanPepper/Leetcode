#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(int, char**){
    std::cout << "Hello, from contains_duplicate!\n";
}


vector<int> twoSum(vector<int>& numbers, int target) {
    int i = 0;
    int j = numbers.size()-1;
    while(i<j){
        if(numbers[i] + numbers[j] == target){
            return {i+1,j+1};
        }
        if(numbers[i] + numbers[j] < target){
            i++;
        }else{
            j--;
        }
    }
    return {};

}