/*
 * =====================================================================================
 *
 *       Filename:  Permutations.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2017 09:59:56
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
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        p(nums, 0, result);
        return result;
    }
    void p(vector<int> &n, int m, vector<vector<int>> &r) {
        if (m >= n.size()) {
            r.push_back(n);
        } else {
            for (int i = m; i < n.size(); ++i) {
                swap(n[m], n[i]);
                p(n, m + 1, r);
                swap(n[m], n[i]);
            }
        }
    }
    void swap(int &x, int &y) {
        int t = x;
        x = y;
        y = t;
    }
};
