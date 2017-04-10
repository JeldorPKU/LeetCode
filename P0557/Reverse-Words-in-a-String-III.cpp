/*
 * =====================================================================================
 *
 *       Filename:  Reverse-Words-in-a-String-III.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/11/2017 00:28:40
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
    string reverseWords(string s) {
        stack<char> myStack;
        string result;
        for (auto c: s) {
            if (c == ' ') {
                while (!myStack.empty()) {
                    result.push_back(myStack.top());
                    myStack.pop();
                }
                result.push_back(c);
            } else {
                myStack.push(c);
            }
        }
        while (!myStack.empty()) {
            result.push_back(myStack.top());
            myStack.pop();
        }
        return result;
    }
};
