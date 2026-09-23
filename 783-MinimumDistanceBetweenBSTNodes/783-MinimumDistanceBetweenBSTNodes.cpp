// Last updated: 23/09/2026, 20:55:50
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
14    int ans = INT_MAX;
15    int prev = -1;
16    void inorder(TreeNode* root){
17        if(root == NULL)
18            return;
19        inorder(root -> left);
20        if(prev != -1)
21           ans = min(ans, root -> val - prev);
22           prev = root -> val;
23           inorder(root -> right);
24    }
25    int minDiffInBST(TreeNode* root) {
26        inorder(root);
27        return ans;
28    }
29};