/*
 * =====================================================================================
 *
 *       Filename:  Longest-Palindromic-Substring.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/17/2017 10:00:58
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
    string longestPalindrome(string s) {
        int max_len = 1, cur_len = 0;
        vector<int> pos_result, pos;
        if (s.length() == 0) {
            return "";
        } else if (s.length() == 1) {
            return s;
        } else if (s.length() == 2) {
            if (s[0] == s[1]) {
                return s;
            } else {
                s.pop_back();
                return s;
            }
        }
        pos_result.push_back(0);
        pos_result.push_back(0);
        for (int i = 1; i < s.length() - 1; ++i) {
            int flag = 1;
            if (s[i - 1] == s[i + 1]) {
                flag = 0;
                pos = find(s, i, i);
                if (pos[1] - pos[0] + 1 > max_len) {
                    max_len = pos[1] - pos[0] + 1;
                    pos_result = pos;
                }
            }
            if (s[i - 1] == s[i]) {
                flag = 0;
                pos = find(s, i - 1, i);
                if (pos[1] - pos[0] + 1 > max_len) {
                    max_len = pos[1] - pos[0] + 1;
                    pos_result = pos;
                }
            }
            if (s[i] == s[i + 1]) {
                flag = 0;
                pos = find(s, i, i + 1);
                if (pos[1] - pos[0] + 1 > max_len) {
                    max_len = pos[1] - pos[0] + 1;
                    pos_result = pos;
                }
            }
            if (flag) {
                pos.push_back(i);
                pos.push_back(i);
                if (pos[1] - pos[0] + 1 > max_len) {
                    max_len = pos[1] - pos[0] + 1;
                    pos_result = pos;
                }
            }
        }
        string result;
        for (int i = pos_result[0]; i <= pos_result[1]; ++i) {
            result.push_back(s[i]);
        }
        return result;
    }
    vector<int> find(string s, int x, int y) {
        vector<int> result;
        if (s[x] != s[y]) {
            result.push_back(0);
            result.push_back(0);
            return result;
        }
        while (x >= 0 && y < s.length() && s[x] == s[y]) {
            x--;
            y++;
        }
        result.push_back(x + 1);
        result.push_back(y - 1);
        return result;
    }
};

