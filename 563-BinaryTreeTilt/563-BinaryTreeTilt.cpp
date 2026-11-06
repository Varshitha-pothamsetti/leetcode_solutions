// Last updated: 06/11/2026, 20:11:29
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
14    int ans = 0;
15    int sum(TreeNode* root){
16        if(root == NULL)
17          return 0;
18        int left = sum(root -> left);
19        int right = sum(root -> right);
20        ans += abs(left - right);
21        return root -> val + left + right;
22    }
23    int findTilt(TreeNode* root) {
24        ans = 0;
25        sum(root);
26        return ans;
27    }
28};