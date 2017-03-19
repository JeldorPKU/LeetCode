/*
 * =====================================================================================
 *
 *       Filename:  String-to-Integer.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/19/2017 14:42:42
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
    int myAtoi(string str) {
        long long result = 0;
        int sgn = 1;
        int i = 0;
        while (i < str.length()) {
            i = str.find_first_not_of(' ');
            if (str[i] == '+' || str[i] == '-') {
                if (str[i++] == '-') {
                    sgn = -1;
                }
            }
            while (isdigit(str[i])) {
                result *= 10;
                result += str[i++] - '0';
                if (result * sgn > INT_MAX) {
                    return INT_MAX;
                } else if (result * sgn < INT_MIN) {
                    return INT_MIN;
                }
            }
            return result * sgn;
        }
        return 0;
    }
};
