/*
 * =====================================================================================
 *
 *       Filename:  Valid-Palindrome.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/11/2017 14:18:44
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
    bool isPalindrome(string s) {
        if (s.empty()) return true;
        int p = 0, q = s.length() - 1;
        do {
            while (!isalnum(s[p])) ++p;
            while (!isalnum(s[q])) --q;
            if (p > q) break;
            if (isupper(s[p])) s[p] = tolower(s[p]);
            if (isupper(s[q])) s[q] = tolower(s[q]);
            if (s[p] != s[q]) return false;
            ++p;
            --q;
        } while (p <= q);
        return true;
    }
};
