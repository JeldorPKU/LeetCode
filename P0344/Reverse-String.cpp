/*
 * =====================================================================================
 *
 *       Filename:  Reverse-String.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/26/2017 14:37:58
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
    string reverseString(string s) {
        for (int i = 0; i < s.length() / 2; ++i) {
            swap(s[i], s[s.length() - i - 1]);
        }
        return s;
    }
};
