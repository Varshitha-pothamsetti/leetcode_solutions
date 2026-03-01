// Last updated: 01/03/2026, 20:19:49
bool checkTree(struct TreeNode* root) {
    return root->val == root->left->val + root->right->val;
}

