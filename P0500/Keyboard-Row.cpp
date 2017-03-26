/*
 * =====================================================================================
 *
 *       Filename:  Keyboard-Row.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/23/2017 17:49:37
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
    int getRow(char ch) {
        ch = tolower(ch);
        switch (ch) {
            case 'q':
            case 'w':
            case 'e':
            case 'r':
            case 't':
            case 'y':
            case 'u':
            case 'i':
            case 'o':
            case 'p':
                return 0;
            case 'a':
            case 's':
            case 'd':
            case 'f':
            case 'g':
            case 'h':
            case 'j':
            case 'k':
            case 'l':
                return 1;
            case 'z':
            case 'x':
            case 'c':
            case 'v':
            case 'b':
            case 'n':
            case 'm':
                return 2;
        }
    }
    vector<string> findWords(vector<string>& words) {
        vector<string> result;
        for (auto word : words) {
            if (word.empty()) {
                result.push_back(word);
                continue;
            }
            int row = getRow(word[0]);
            bool flag = true;
            for (auto ch : word.substr(1, word.length() - 1)) {
                if (row != getRow(ch)) {
                    flag = false;
                    break;
                }
            }
            if (flag) result.push_back(word);
        }
        return result;
    }
};
