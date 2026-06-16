// Last updated: 16/06/2026, 20:24:35
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
14    bool hasPathSum(TreeNode* root, int targetSum) {
15        if(root == nullptr) return false;
16        if(root->left == nullptr && root->right == nullptr){
17            return targetSum == root->val;
18        }
19        return hasPathSum(root->left, targetSum - root->val) ||
20               hasPathSum(root->right, targetSum - root->val);
21    }
22};