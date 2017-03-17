/*
 * =====================================================================================
 *
 *       Filename:  Longest-Substring-Without-Repeating-Characters.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/17/2017 09:58:27
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
    int lengthOfLongestSubstring(string s) {
        if (s.empty())
            return 0;
        int max_len = 1, cur_len = 0, j;
        map<char, int> letters;
        map<char, int>::iterator it;
        for (int i = 0; i < s.length(); ++i) {
            if (letters.find(s[i]) != letters.end()) {
                max_len = (cur_len > max_len) ? cur_len : max_len;
                j = letters[s[i]];
                letters.clear();
                cur_len = 0;
                i = j;
            } else {
                letters[s[i]] = i;
                cur_len++;
            }
        }
        return max_len = (cur_len > max_len) ? cur_len : max_len;
    }
};

