/*
 * =====================================================================================
 *
 *       Filename:  Number-Complement.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/23/2017 17:35:11
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
    int findComplement(int num) {
        unsigned mask = 1;
        while (num >= mask) {
            mask <<= 1;
        }
        --mask;
        return ~num & mask;
    }
};
