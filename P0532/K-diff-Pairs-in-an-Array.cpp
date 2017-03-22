/*
 * =====================================================================================
 *
 *       Filename:  K-diff-Pairs-in-an-Array.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/23/2017 15:52:55
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
    int findPairs(vector<int>& nums, int k) {
        if (k < 0) {
            return 0;
        }
        map<int, int> m;
        for (auto i: nums) {
            if (m.find(i) != m.end()) {
                m[i]++;
            } else {
                m[i] = 1;
            }
        }
        int count = 0;
        map<int, int>::iterator i;
        if (k) {
            for (i = m.begin(); i != m.end(); ++i) {
                if (m.find(i->first + k) != m.end()) {
                    count++;
                }
            }
        } else {
            for (i = m.begin(); i != m.end(); ++i) {
                if (i->second > 1) count++;
            }
        }
        return count;
    }
};
