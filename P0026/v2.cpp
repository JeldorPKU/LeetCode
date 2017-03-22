/*
 * =====================================================================================
 *
 *       Filename:  v2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2017 15:52:59
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
    int removeDuplicates(vector<int>& nums) {
        int i = !nums.empty();
        for (int n: nums) {
            if (n > nums[i - 1]) {
                nums[i++] = n;
            }
        }
        return i;
    }
};
