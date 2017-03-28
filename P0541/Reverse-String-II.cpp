/*
 * =====================================================================================
 *
 *       Filename:  Reverse-String-II.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/28/2017 17:05:47
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
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.length(); i += 2 * k) {
            reverse(s.begin() + i, min(s.begin() + i + k, s.end()));
        }
        return s;
    }
};
