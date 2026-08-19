// Last updated: 19/08/2026, 20:22:54
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
14 void Pre(TreeNode* root,vector<int>&resPreOrder)
15{
16  if(!root){
17      return ;
18  }
19  resPreOrder.push_back(root->val);
20  Pre(root->left,resPreOrder);
21  Pre(root->right,resPreOrder);
22}
23    vector<int> preorderTraversal(TreeNode* root) {
24    vector<int>resPreOrder;
25    Pre(root,resPreOrder);
26    return resPreOrder;
27}
28};