// Problem: https://leetcode.com/problems/add-strings/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string add(string num1, string num2){
        string ans;
        int index1 = num1.size() - 1;
        int index2 = num2.size() - 1;
        int carry = 0;
        int sum = 0;
        while(index2 >= 0){
            sum = (num1[index1] - '0') + (num2[index2] - '0') + carry;
            carry = sum/10;
            char c = '0' + sum % 10;
            ans += c;
            index2--;
            index1--;
        }
        while (index1 >= 0){
            sum = (num1[index1] - '0') + carry;
            carry = sum /10;
            char c = '0' + sum % 10;
            ans += c;
            index1--;
        }
        if (carry)
        ans += '1';

        reverse(ans.begin() , ans.end());
        return ans;
    }

    string addStrings(string num1, string num2) {
        if (num1.size() > num2.size()) return add(num1, num2);
        else return add(num2, num1);
    }
};
