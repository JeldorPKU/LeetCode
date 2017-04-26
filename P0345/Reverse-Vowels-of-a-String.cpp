/*
 * =====================================================================================
 *
 *       Filename:  Reverse-Vowels-of-a-String.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/26/2017 11:15:16
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
    bool isVowel(char c) {
        switch (c) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                return true;
            default:
                return false;
        }
        return false;
    }
    string reverseVowels(string s) {
        if (s.empty()) return "";
        queue<char> consonants;
        stack<char> vowels;
        vector<bool> vowelOrConsonant(s.length(), false);
        int i = 0;
        for (auto c: s) {
            vowelOrConsonant[i++] = isVowel(c);
            if (isVowel(c)) {
                vowels.push(c);
            } else {
                consonants.push(c);
            }
        }
        string result;
        for (bool flag: vowelOrConsonant) {
            if (flag) {
                result.push_back(vowels.top());
                vowels.pop();
            } else {
                result.push_back(consonants.front());
                consonants.pop();
            }
        }
        return result;
    }
};
