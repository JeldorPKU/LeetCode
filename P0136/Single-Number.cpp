/*
 * =====================================================================================
 *
 *       Filename:  Single-Number.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/21/2017 22:58:37
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
    int singleNumber(vector<int>& nums) {
        int odd = nums.front();
        for (auto i = nums.begin() + 1; i != nums.end(); ++i) {
            odd = odd ^ (*i);
        }
        return odd;
    }
};
