/*
 * =====================================================================================
 *
 *       Filename:  Max-Consecutive-Ones.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/23/2017 15:31:14
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
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum = 0;
        int maxsum = 0;
        for (auto i = nums.begin(); i != nums.end(); ++i) {
            if (*i == 0) {
                maxsum = max(maxsum, sum);
                sum = 0;
            } else {
                sum ++;
            }
        }
        return max(maxsum, sum);
    }
};
