// Last updated: 01/03/2026, 20:22:43
class Solution {
public:
 void Post(TreeNode* root,vector<int>&resPostOrder)
{
  if(!root){
      return ;
  }
  Post(root->left,resPostOrder);
  Post(root->right,resPostOrder);
  resPostOrder.push_back(root->val);
}
    vector<int> postorderTraversal(TreeNode* root) {
    vector<int>resPostOrder;
    Post(root,resPostOrder);
    return resPostOrder;
}
};