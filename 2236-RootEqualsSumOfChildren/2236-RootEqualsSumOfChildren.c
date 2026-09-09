// Last updated: 09/09/2026, 21:27:14
bool checkTree(struct TreeNode* root) {
    return root->val == root->left->val + root->right->val;
}

