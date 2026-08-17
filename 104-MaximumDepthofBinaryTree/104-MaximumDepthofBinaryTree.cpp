// Last updated: 17/08/2026, 19:59:56
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
14    int maxDepth(TreeNode* root) {
15        if(root == nullptr) return 0;
16        int left_depth = maxDepth(root->left);
17        int right_depth = maxDepth(root->right);
18        return 1 + std :: max(left_depth, right_depth);
19    }
20};