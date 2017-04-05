/*
 * =====================================================================================
 *
 *       Filename:  Ugly-Number.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/05/2017 09:55:36
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
    bool isUgly(int num) {
        if (!num) return false;
        while (!(num % 2)) num /= 2;
        while (!(num % 3)) num /= 3;
        while (!(num % 5)) num /= 5;
        return num == 1;
    }
};
