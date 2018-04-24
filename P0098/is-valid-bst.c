int minElement(struct TreeNode* root) {
    if (root->left == NULL)
        return root->val;
    else
        return minElement(root->left);
}

int maxElement(struct TreeNode* root) {
    if (root->right == NULL)
        return root->val;
    else
        return maxElement(root->right);
}

bool isValidBST(struct TreeNode* root) {
    if (root == NULL) return true;
    if (root->right != NULL && (root->val >= minElement(root->right))) return false;
    if (root->left != NULL && (root->val <= maxElement(root->left))) return false;
    return isValidBST(root->left) && isValidBST(root->right);
}
