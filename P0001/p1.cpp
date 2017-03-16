/*
 * =====================================================================================
 *
 *       Filename:  p1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/16/2017 13:29:44
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
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int, int> hash;
        for (int i = 0; i < nums.size(); ++i) {
            int number = target - nums[i];
            if (hash.find(number) != hash.end()) {
                result.push_back(hash[number]);
                result.push_back(i);
                return result;
            } else {
                hash[nums[i]] = i;
            }
        }
    }
};

