// Last updated: 26/08/2026, 19:15:39
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
14    int minDepth(TreeNode* root) {
15        if(root == nullptr)
16          return 0;
17        queue<TreeNode*> q;
18        q.push(root);
19        int depth = 1;
20        while(!q.empty()){
21            int size = q.size();
22            while(size--){
23                TreeNode* node = q.front();
24                q.pop();
25                if(node -> left == nullptr && node -> right ==  nullptr)
26                  return depth;
27                if(node -> left) 
28                   q.push(node -> left);
29                if(node -> right)
30                   q.push(node -> right);  
31            }
32            depth++;
33        }
34        return depth;
35    }
36};