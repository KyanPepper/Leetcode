#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(int, char**){
    std::cout << "Hello, from contains_duplicate!\n";
}


bool isAnagram(string s, string t) {
    unordered_map <char,int> hash;
    if(s.length() != t.length()){
        return false;
    }
    for(int i = 0; i< s.length(); i++){
        char letter = s[i];
        if(hash.find(letter) == hash.end()){
            hash[letter] = 1;
        }else{
            hash[letter]++;
        }
    }

    for(int i =0; i < t.length(); i++){
        if(hash.find(t[i]) == hash.end()){
            return false;
        }
        if(hash[t[i]] == 0){
            return false;
        }else{
            hash[t[i]]--;
        }
    }
    return true;

}