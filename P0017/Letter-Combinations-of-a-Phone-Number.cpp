/*
 * =====================================================================================
 *
 *       Filename:  Letter-Combinations-of-a-Phone-Number.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2017 11:41:45
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
    vector<string> letterCombinations(string digits) {
        vector<string> result{""};
        if (digits.empty()) return vector<string>();
        static const vector<string> v = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        for (int i = 0; i < digits.length(); ++i) {
            if (!isdigit(digits[i])) break;
            const string &candidate = v[digits[i] - '0'];
            if (candidate.empty()) continue;
            vector<string> temp;
            for (int j = 0; j < candidate.length(); ++j) {
                for (int k = 0; k < result.size(); ++k) {
                    temp.push_back(result[k] + candidate[j]);
                }
            }
            result.swap(temp);
        }
        return result;
    }
};
