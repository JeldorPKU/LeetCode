/*
 * =====================================================================================
 *
 *       Filename:  License-Key-Formatting.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/06/2017 21:27:48
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
    string licenseKeyFormatting(string S, int K) {
        stack<char> s1, s2;
        string result;
        for (auto c: S) {
            if (c == '-') continue;
            s1.push(toupper(c));
        }
        int k = 0;
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
            ++k;
            if (k == K && !s1.empty()) {
                s2.push('-');
                k = 0;
            }
        }
        while (!s2.empty()) {
            result.push_back(s2.top());
            s2.pop();
        }
        return result;
    }
};
