#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main(int, char **)
{
}

int longestConsecutive(vector<int> &nums) {
    unordered_set<int> hash(nums.begin(), nums.end());
    int longestStreak = 0;

    for (int num : nums) {
      
        if (hash.find(num - 1) == hash.end()) {
            int currentNum = num;
            int currentStreak = 1;
            while (hash.find(currentNum + 1) != hash.end()) {
                currentNum++;
                currentStreak++;
            }

            longestStreak = max(longestStreak, currentStreak);
        }
    }

    return longestStreak;
}
