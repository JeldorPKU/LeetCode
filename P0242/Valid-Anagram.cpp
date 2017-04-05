/*
 * =====================================================================================
 *
 *       Filename:  Valid-Anagram.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/05/2017 09:19:54
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
    bool isAnagram(string s, string t) {
        vector<int> letters(26, 0);
        for (auto c: s) {
            ++letters[c - 'a'];
        }
        for (auto c: t) {
            --letters[c - 'a'];
        }
        for (auto i: letters) {
            if (i) return false;
        }
        return true;
    }
};
