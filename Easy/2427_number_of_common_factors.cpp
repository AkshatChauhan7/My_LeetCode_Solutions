// Problem: https://leetcode.com/problems/number-of-common-factors/
// Difficulty: Easy
// Time Complexity: O(min(a, b))
// Space Complexity: O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int commonFactors(int a, int b) {
        int count = 0;
        int limit = min(a, b);
        for (int i = 1; i <= limit; i++) {
            if (a % i == 0 && b % i == 0) {
                count++;
            }
        }
        return count;   
    }
};
