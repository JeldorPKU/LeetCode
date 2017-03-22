/*
 * =====================================================================================
 *
 *       Filename:  Hamming-Distance.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/23/2017 16:04:53
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
    int hammingDistance(int x, int y) {
        int n = x ^ y;
        int cnt = 0;
        for (auto i = 0; i < (sizeof(int) << 3); ++i) {
            cnt += n & 1;
            n >>= 1;
        }
        return cnt;
    }
};
