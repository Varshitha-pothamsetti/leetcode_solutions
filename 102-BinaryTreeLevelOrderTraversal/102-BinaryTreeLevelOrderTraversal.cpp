// Last updated: 25/09/2026, 19:59:44
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
14    vector<vector<int>> levelOrder(TreeNode* root) {
15        vector<vector<int>> ans;
16        if(root == NULL)
17          return ans;
18
19          queue<TreeNode*> q;
20          q.push(root);
21          while(!q.empty()){
22            int n = q.size();
23            vector<int> level;
24            for(int i = 0; i < n; i++){
25                TreeNode* node = q.front();
26                q.pop();
27                level.push_back(node -> val);
28                if(node -> left != NULL)
29                  q.push(node -> left);
30                if(node -> right != NULL)
31                   q.push(node -> right);
32            }
33            ans.push_back(level);
34          }
35          return ans;
36    }
37};