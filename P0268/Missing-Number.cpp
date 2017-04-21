/*
 * =====================================================================================
 *
 *       Filename:  Missing-Number.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/21/2017 23:06:38
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
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n * (n + 1) / 2;
        for (auto i: nums) {
            sum -= i;
        }
        return sum;
    }
};
