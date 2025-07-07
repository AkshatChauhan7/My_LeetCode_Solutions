// Problem: https://leetcode.com/problems/remove-stars-from-a-string/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string removeStars(string s) {
        string result = "";
        int i = 0;
        while(i < s.size()){
            if (s[i] == '*'){
                if (!result.empty()){
                    result.pop_back();
                }
            }
            else{
                result += s[i];
            }
            i++;
        }
        return result;
    }
};
