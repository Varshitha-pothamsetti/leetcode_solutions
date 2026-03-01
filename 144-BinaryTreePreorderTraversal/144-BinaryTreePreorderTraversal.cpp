// Last updated: 01/03/2026, 20:22:44
class Solution {
public:
 void Pre(TreeNode* root,vector<int>&resPreOrder)
{
  if(!root){
      return ;
  }
  resPreOrder.push_back(root->val);
  Pre(root->left,resPreOrder);
  Pre(root->right,resPreOrder);
}
    vector<int> preorderTraversal(TreeNode* root) {
    vector<int>resPreOrder;
    Pre(root,resPreOrder);
    return resPreOrder;
}
};