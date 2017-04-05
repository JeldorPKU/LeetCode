/*
 * =====================================================================================
 *
 *       Filename:  Add-Digits.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/05/2017 14:10:46
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
    int gen(int num) {
        int result = 0;
        while (num) {
            result += num % 10;
            num /= 10;
        }
        return result;
    }
    int addDigits(int num) {
        while (num >= 10) {
            num = gen(num);
        }
        return num;
    }
};
