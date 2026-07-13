// Last updated: 13/07/2026, 21:31:59
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
14    int sumOfLeftLeaves(TreeNode* root) {
15        if (root == NULL)
16            return 0;
17
18        int sum = 0;
19
20        if (root->left != NULL &&
21            root->left->left == NULL &&
22            root->left->right == NULL) {
23            sum += root->left->val;
24        }
25
26        sum += sumOfLeftLeaves(root->left);
27        sum += sumOfLeftLeaves(root->right);
28
29        return sum;
30    }
31};