// Last updated: 27/11/2026, 21:25:35
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
13private:
14    int currVal = 0;
15    int currCount = 0;
16    int maxCount = 0;
17    vector<int> modes;
18
19    void inorder(TreeNode* node) {
20        if (!node) return;
21
22        inorder(node->left);
23
24        if (node->val == currVal) {
25            currCount++;
26        } else {
27            currVal = node->val;
28            currCount = 1;
29        }
30
31        if (currCount > maxCount) {
32            maxCount = currCount;
33            modes = {currVal};
34        } else if (currCount == maxCount) {
35            modes.push_back(currVal);
36        }
37
38        inorder(node->right);
39    }
40
41public:
42    vector<int> findMode(TreeNode* root) {
43        inorder(root);
44        return modes;
45    }
46};