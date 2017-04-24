/*
 * =====================================================================================
 *
 *       Filename:  Implement-strStr.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/24/2017 16:35:18
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
    int strStr(string haystack, string needle) {
        if (haystack.length() < needle.length()) return -1;
        if (haystack.length() == 0) {
            if (needle.length() == 0) {
                return 0;
            } else {
                return -1;
            }
        }
        for (int i = 0; i <= haystack.length() - needle.length(); ++i) {
            bool flag = true;
            for (int j = 0; j < needle.length(); ++j) {
                if (needle[j] != haystack[i + j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) return i;
        }
        return -1;
    }
};
