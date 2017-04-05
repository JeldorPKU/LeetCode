/*
 * =====================================================================================
 *
 *       Filename:  Find-All-Anagrams-in-a-String.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/05/2017 09:32:18
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
    bool check(vector<int> &letters) {
        for (auto i : letters) {
            if (i) return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        if (p.length() > s.length()) return result;
        vector<int> letters(26, 0);
        for (auto c: p) {
            ++letters[c - 'a'];
        }
        for (int i = 0; i < p.length(); ++i) {
            --letters[s[i] - 'a'];
        }
        if (check(letters)) result.push_back(0);
        int i = 0, j = p.length();
        while (j < s.length()) {
            ++letters[s[i++] - 'a'];
            --letters[s[j++] - 'a'];
            if (check(letters)) result.push_back(i);
        }
        return result;
    }
};
