// Last updated: 25/08/2026, 21:17:12
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
14    void findPaths(TreeNode* root, string path, vector<string>& ans) {
15        if (root == nullptr)
16            return;
17        path += to_string(root->val);
18        if (root->left == nullptr && root->right == nullptr) {
19            ans.push_back(path);
20            return;
21        }
22        path += "->";
23        findPaths(root->left, path, ans);
24        findPaths(root->right, path, ans);
25    }
26    vector<string> binaryTreePaths(TreeNode* root) {
27        vector<string> ans;
28        findPaths(root, "", ans);
29        return ans;
30    }
31};