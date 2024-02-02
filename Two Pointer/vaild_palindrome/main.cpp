#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(int, char**){
    std::cout << "Hello, from contains_duplicate!\n";
}

   bool isPalindrome(string s) {
        int j = s.length() - 1;
        for (int i = 0; i < s.length(); i++) {
            while (i < s.length() && !isalnum(s[i])) {
                i++;
            }
            while (j >= 0 && !isalnum(s[j])) {
                j--;
            }
            if (i < s.length() && j >= 0 && tolower(s[i]) != tolower(s[j])) {
                return false;
            }
            j--;
        }
        return true;
    }


