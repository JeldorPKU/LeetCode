/*
 * =====================================================================================
 *
 *       Filename:  Number-of-1-Bits.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/23/2017 16:04:31
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
    int hammingWeight(uint32_t n) {
        int cnt = 0;
        while (n) {
            cnt += n & 1;
            n >>= 1;
        }
        return cnt;
    }
};
