/*
 * =====================================================================================
 *
 *       Filename:  Ugly-Number-II.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/05/2017 12:42:41
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
    int gen(int n) {
        int m = 0;
        while (n) {
            int q = n % 10;
            m += q * q;
            n /= 10;
        }
        return m;
    }
    bool isHappy(int n) {
        while (n >= 10) {
            n = gen(n);
        }
        return n == 1 || n == 7;
    }
};
