/*
 * =====================================================================================
 *
 *       Filename:  Convert-BST-to-Greater-Tree.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/21/2017 14:28:56
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
    int sumOfTree(TreeNode *root) {
        if (root == NULL) {
            return 0;
        }
        return sumOfTree(root->left) + sumOfTree(root->right) + root->val;
    }
    void buildSumTree(TreeNode *sumTree, TreeNode *root) {
        if (root == NULL) return;
        if (root->right) {
            sumTree->right = new TreeNode(sumTree->val);
            sumTree->right->val -= sumOfTree(root->right);
            sumTree->right->val += sumOfTree(root->right->right);
            buildSumTree(sumTree->right, root->right);
        }
        if (root->left) {
            sumTree->left = new TreeNode(sumTree->val); // parent's right tree
            sumTree->left->val += root->val; // parent
            if (root->left->right) {
                sumTree->left->val += sumOfTree(root->left->right); // its own right tree
            }
            buildSumTree(sumTree->left, root->left);
        }
    }
    void addTree(TreeNode *t1, TreeNode *t2) {
        t1->val += t2->val;
        if (t1->left) {
            addTree(t1->left, t2->left);
        }
        if (t1->right) {
            addTree(t1->right, t2->right);
        }
    }
    TreeNode* convertBST(TreeNode* root) {
        if (root == NULL) return root;
        TreeNode *sumTree = new TreeNode(sumOfTree(root->right));
        buildSumTree(sumTree, root);
        addTree(root, sumTree);
        return root;
    }
};
