/*
 * =====================================================================================
 *
 *       Filename:  Sum-Root-to-Leaf-Numbers.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/17/2017 23:29:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> nums;
    void dfs(TreeNode *p, int c) {
        if (p->left == nullptr and p->right == nullptr) {
            nums.push_back(c * 10 + p->val);
            return;
        }
        if (p->left != nullptr) {
            dfs(p->left, c * 10 + p->val);
        }
        if (p->right != nullptr) {
            dfs(p->right, c * 10 + p->val);
        }
    }
    int sumNumbers(TreeNode* root) {
        nums.clear();
        if (root != nullptr) dfs(root, 0);
        if (nums.empty()) {
            return 0;
        } else {
            int sum = 0;
            for (auto i: nums) sum += i;
            return sum;
        }
    }
};
