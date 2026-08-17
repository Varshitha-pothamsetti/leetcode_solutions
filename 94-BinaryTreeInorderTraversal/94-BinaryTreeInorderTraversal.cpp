// Last updated: 17/08/2026, 19:57:55
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
14    vector<int> inorderTraversal(TreeNode* root) {
15        vector<int> ans;
16        stack<TreeNode*> st;
17        TreeNode* curr = root;
18        while (curr != nullptr || !st.empty()) {
19            while (curr != nullptr) {
20                st.push(curr);
21                curr = curr->left;
22            }
23            curr = st.top();
24            st.pop();
25            ans.push_back(curr->val);
26            curr = curr->right;
27        }
28        return ans;
29    }
30};