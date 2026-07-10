// Last updated: 10/07/2026, 20:21:44
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    bool check(TreeNode* left, TreeNode* right) {
15        if(left == NULL && right == NULL)
16            return true;
17        if(left == NULL || right == NULL)
18            return false;
19        if(left->val != right->val)
20            return false;
21        return check(left->left, right->right) && 
22               check(left->right, right->left);
23    }
24    bool isSymmetric(TreeNode* root) {
25        if(root == NULL)
26            return true;
27        return check(root->left, root->right);
28    }
29};