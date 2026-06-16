// Last updated: 16/06/2026, 20:31:36
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
14    vector<vector<int>>ans;
15    vector<int> path;
16    void dfs(TreeNode* root, int targetSum){
17        if(root == nullptr) return;
18        path.push_back(root->val);
19        if(root->left == nullptr && root->right == nullptr){
20            if(targetSum == root->val){
21                ans.push_back(path);
22            }
23        }
24        dfs(root->left, targetSum - root->val);
25        dfs(root->right, targetSum - root->val);
26        path.pop_back();
27    }
28    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
29        dfs(root, targetSum);
30        return ans;
31    }
32};