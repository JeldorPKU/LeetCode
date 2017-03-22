/*
 * =====================================================================================
 *
 *       Filename:  Remove-Duplicates-From-Sorted-Array.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2017 15:35:49
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
        int n = nums.size();
        if (n == 0) return 0;
        int currentValue = nums.front();
        int count = 0;
        while (count < n) {
            nums.push_back(currentValue);
            while (count < n && nums.front() == currentValue) {
                nums.erase(nums.begin());
                count++;
            }
            currentValue = nums.front();
        }
        return nums.size();
    }
};
