/*
 * =====================================================================================
 *
 *       Filename:  Next-Greater-Element-I.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/09/2017 13:09:00
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
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> result;
        vector<int>::iterator i1, i2;
        for (i1 = findNums.begin(); i1 != findNums.end(); ++i1) {
            int t = -1;
            bool flag = false;
            for (i2 = nums.begin(); i2 != nums.end(); ++i2) {
                if (!flag && *i2 == *i1) flag = true;
                if (!flag) continue;
                if (*i2 > *i1) {
                    t = *i2;
                    break;
                }
            }
            result.push_back(t);
        }
        return result;
    }
};
