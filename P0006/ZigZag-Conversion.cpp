/*
 * =====================================================================================
 *
 *       Filename:  ZigZag-Conversion.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/19/2017 14:41:14
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
    string convert(string s, int numRows) {
        string result;
        int count = 0;
        int i = 0, j = 0;
        vector<bool> v(s.length(), false);
        int step = 2 * (numRows - j - 1);
        while (i < s.length()) {
            result.push_back(s[i]);
            v[i] = !v[i];
            i += step;
            if (!step) {
                break;
            }
        }
        while (++j && j < s.length() && !v[j]) {
            step = 2 * (numRows - j - 1);
            int k = j;
            while (k < s.length()) {
                result.push_back(s[k]);
                v[k] = !v[k];
                k += step;
                if (step == 0) {
                    k += j * 2;
                    continue;
                } else if (k >= s.length() || v[k]) {
                    break;
                }
                result.push_back(s[k]);
                v[k] = !v[k];
                k += j * 2;
            }
        }
        return result;
    }
};
