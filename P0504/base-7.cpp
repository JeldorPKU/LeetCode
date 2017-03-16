/*
 * =====================================================================================
 *
 *       Filename:  base-7.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/16/2017 13:41:33
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
    string convertToBase7(int num) {
        if (num == 0) {
            return "0";
        }
        string result;
        if (num < 0) {
            result.push_back('-');
            num = -num;
        }
        string temp;
        while (num > 0) {
            temp.push_back(num % 7 + '0');
            num /= 7;
        }
        for (int i = temp.size() - 1; i >= 0; --i) {
            result.push_back(temp[i]);
        }
        return result;
    }
};

