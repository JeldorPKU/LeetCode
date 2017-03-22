/*
 * =====================================================================================
 *
 *       Filename:  v2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2017 15:38:23
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
    int removeElement(vector<int>& nums, int val) {
        int count = 0, n = nums.size();
        while (count++ < n) {
            if (nums.front() != val) nums.push_back(nums.front());
            nums.erase(nums.begin());
        }
        return nums.size();
    }
};
