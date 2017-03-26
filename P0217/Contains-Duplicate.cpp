/*
 * =====================================================================================
 *
 *       Filename:  Contains-Duplicate.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/23/2017 17:56:51
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
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for (auto i : nums) {
            if (s.find(i) != s.end()) return true;
            s.insert(i);
        }
        return false;
    }
};
