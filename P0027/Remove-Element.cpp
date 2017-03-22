/*
 * =====================================================================================
 *
 *       Filename:  Remove-Element.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2017 15:38:14
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
        vector<int>::iterator it;
        for (it = nums.begin(); it != nums.end(); ) {
            if (*it == val) {
                nums.erase(it);
                it = nums.begin();
            } else {
                ++it;
            }
        }
        return nums.size();
    }
};
