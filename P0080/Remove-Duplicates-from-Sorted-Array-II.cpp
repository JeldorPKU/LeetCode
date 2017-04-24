/*
 * =====================================================================================
 *
 *       Filename:  Remove-Duplicates-from-Sorted-Array-II.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/24/2017 16:28:01
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
        if (nums.size() <= 2) return nums.size();
        int rear = 1;
        for (int i = 2; i < nums.size(); ++i) {
            if (!(nums[rear] == nums[i] and nums[i] == nums[rear - 1])) {
                nums[++rear] = nums[i];
            }
        }
        return rear + 1;
    }
};
