/*
 * =====================================================================================
 *
 *       Filename:  Valid-Parentheses.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/18/2017 11:25:07
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
    bool isLeft(char c) {
        return (c == '(' || c == '[' || c == '{');
    }
    bool isPair(char c1, char c2) {
        switch (c1) {
            case '(':
                return c2 == ')';
            case '[':
                return c2 == ']';
            case '{':
                return c2 == '}';
        }
        return false;
    }
    bool isValid(string s) {
        stack<char> op;
        for (int i = 0; i < s.length(); ++i) {
            if (isLeft(s[i])) {
                op.push(s[i]);
            } else {
                if (!op.empty() && isPair(op.top(), s[i])) {
                    op.pop();
                } else {
                    return false;
                }
            }
        }
        return op.empty();
    }
};

