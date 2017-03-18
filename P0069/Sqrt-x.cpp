/*
 * =====================================================================================
 *
 *       Filename:  Sqrt-x.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/18/2017 10:45:30
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
    int mySqrt(int x) {
        int left = 1, right = x - 1;
        int mid = left + (right - left) / 2;
        while (left < right - 1) {
            int p = x / mid;
            if (p < mid) {
                right = mid;
            } else if (p > mid) {
                left = mid;
            } else {
                return mid;
            }
            mid = left + (right - left) / 2;
        }
        return mid;
    }
};

