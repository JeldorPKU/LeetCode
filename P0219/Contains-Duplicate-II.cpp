/*
 * =====================================================================================
 *
 *       Filename:  Contains-Duplicate-II.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/23/2017 18:01:39
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
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> m;
        if (k == 0) return false;
        for (int i = 0; i < nums.size(); ++i) {
            if (m.find(nums[i]) != m.end()) {
                if (i - m[nums[i]] <= k) {
                    return true;
                } else {
                    m[nums[i]] = i;
                }
            } else {
                m[nums[i]] = i;
            }
        }
        return false;
    }
};
