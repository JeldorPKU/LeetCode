/*
 * =====================================================================================
 *
 *       Filename:  Repeated-Substring-Pattern.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/26/2017 11:01:29
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
    bool repeatedSubstringPattern(string s) {
        const vector<int> primes{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
        for (auto i: primes) {
            if (i > s.length()) break;
            if (s.length() % i != 0) continue;
            string item = s.substr(0, s.length() / i);
            bool flag = true;
            for (int j = 0; j < i; ++j) {
                string cut = s.substr(j * s.length() / i, s.length() / i);
                if (cut != item) {
                    flag = false;
                    break;
                }
            }
            if (flag) return true;
        }
        return false;
    }
};
