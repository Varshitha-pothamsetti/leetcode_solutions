// Last updated: 01/03/2026, 20:21:14
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* searchBST(struct TreeNode* root, int val) {
    if( !root )
        return root;
    
	if( root->val == val )
        return root;
    else if( root->val > val )
        return searchBST( root->left , val );
    else
        return searchBST( root->right , val );   
}