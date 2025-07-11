// Problem: https://leetcode.com/problems/fibonacci-number/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <vector>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        int fib[n+1];
        fib[0] = 0;
        fib[1] = 1;
        for (int i = 2; i <= n; i++){
            fib[i] = fib[i - 1] + fib[i-2];
        }
        return fib[n];
    }
};
