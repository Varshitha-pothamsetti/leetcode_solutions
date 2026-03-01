// Last updated: 01/03/2026, 20:19:14
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
        int countPerfectSubtrees(TreeNode* root, std::vector<int>& sizes) {
        if (!root) return 0;
        int leftSize = countPerfectSubtrees(root->left, sizes);
        int rightSize = countPerfectSubtrees(root->right, sizes);
        if (leftSize == rightSize && leftSize >= 0) {
            int currentSize = leftSize + rightSize + 1;
            sizes.push_back(currentSize);
            return currentSize;
        }
        return -1;
    }
    int kthLargestPerfectSubtree(TreeNode* root, int k) {
         std::vector<int> sizes;
        countPerfectSubtrees(root, sizes);
        std::sort(sizes.rbegin(), sizes.rend());
        if (k <= sizes.size()) {
            return sizes[k - 1]; 
        } else {
            return -1; 
        }
    }
};