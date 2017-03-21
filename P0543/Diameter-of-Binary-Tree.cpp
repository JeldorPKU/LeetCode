/*
 * =====================================================================================
 *
 *       Filename:  Diameter-of-Binary-Tree.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2017 23:53:50
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
    int maxDepth(TreeNode* t) {
        if (t == NULL) {
            return 0;
        } else if (t->left == NULL && t->right == NULL) {
            return 1;
        } else {
            return max(maxDepth(t->left), maxDepth(t->right)) + 1;
        }
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL) {
            return 0;
        } else if (root->left == NULL && root->right == NULL) {
            return 0;
        } else {
            int temp = maxDepth(root->left) + maxDepth(root->right) + 1;
            temp = max(temp, diameterOfBinaryTree(root->left) + 1);
            temp = max(temp, diameterOfBinaryTree(root->right) + 1);
            return temp - 1;
        }
    }
};
