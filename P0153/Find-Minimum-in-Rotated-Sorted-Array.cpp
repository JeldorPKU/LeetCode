/*
 * =====================================================================================
 *
 *       Filename:  Find-Minimum-in-Rotated-Sorted-Array.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/06/2017 20:50:21
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
    int findMin(vector<int>& nums) {
        int result = nums.front();
        vector<int>::iterator i;
        int cur = nums.front();
        for (i = nums.begin() + 1; i != nums.end(); ++i) {
            if (cur > (*i)) {
                return *i;
            }
            cur = (*i);
        }
        return result;
    }
};
