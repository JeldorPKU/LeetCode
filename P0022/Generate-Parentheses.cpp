/*
 * =====================================================================================
 *
 *       Filename:  Generate-Parentheses.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/21/2017 19:24:34
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
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        gen(result, "", n, 0);
        return result;
    }
    void gen(vector<string> &v, string s, int n, int m) {
        if (n == 0 && m == 0) {
            v.push_back(s);
            return;
        }
        if (n > 0) {
            gen(v, s + "(", n - 1, m + 1);
        }
        if (m > 0) {
            gen(v, s + ")", n, m - 1);
        }
    }
};
