/*
 * =====================================================================================
 *
 *       Filename:  Evaluate-Reverse-Polish-Notation.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/09/2017 21:40:36
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
    bool isOp(string s) {
        return (s.length() == 1 && !isdigit(s[0]));
    }
    int calc(int op1, int op2, char op) {
        switch (op) {
            case '+': return op1 + op2;
            case '-': return op1 - op2;
            case '*': return op1 * op2;
            case '/': return op1 / op2;
        }
        return 0;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> num;
        for (auto s: tokens) {
            if (isOp(s)) {
                int op2 = num.top();
                num.pop();
                int op1 = num.top();
                num.pop();
                num.push(calc(op1, op2, s[0]));
            } else {
                num.push(stoi(s));
            }
        }
        return num.top();
    }
};
