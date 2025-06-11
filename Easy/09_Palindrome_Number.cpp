// Problem: https://leetcode.com/problems/palindrome-number/
// Difficulty: Easy
// Time Complexity: O(log₁₀(n)) 
// Space Complexity: O(1)

class Solution {
public:
    bool isPalindrome(int x) {
        long long reversednumber = 0;
        int dup = x;
        while (x>0){
            int lastdigit = x % 10;
            reversednumber = (reversednumber * 10) + lastdigit;
            x = x/10;
        }
        if (reversednumber == dup){
            return true;
        }
        else{
            return false;
        }
        
    }
};