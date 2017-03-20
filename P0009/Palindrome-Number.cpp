/*
 * =====================================================================================
 *
 *       Filename:  Palindrome-Number.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2017 10:25:58
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long long result = 0;
        long long xx = x;
        queue<int> q;
        while (x) {
            q.push(x % 10);
            x /= 10;
        }
        while (!q.empty()) {
            result *= 10;
            result += q.front();
            q.pop();
        }
        cout << result << endl;
        return (result == xx);
    }
};
