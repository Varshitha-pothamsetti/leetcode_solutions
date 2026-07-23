// Last updated: 23/07/2026, 20:44:48
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
14    void dfs(TreeNode* root, int mn, long long &ans){
15        if(root == nullptr) return;
16        if(root->val > mn){
17            ans = min(ans, (long long) root->val);
18        }else{
19            dfs(root->left, mn, ans);
20            dfs(root->right, mn, ans);
21        }
22    }
23    int findSecondMinimumValue(TreeNode* root) {
24        long long ans = LLONG_MAX;
25        int mn = root->val;
26        dfs(root, mn, ans);
27        return(ans == LLONG_MAX) ? -1 : (int) ans;
28    }
29};