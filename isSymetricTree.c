/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 **/
bool isSymmetric(struct TreeNode* root) 
{
   bool isMirror(struct TreeNode* left, struct TreeNode* right)
   {
     if (left == NULL && right == NULL)
     {
        return true;
     }
     if(left == NULL || right == NULL)
     {
        return false;
     }
     return left->val == right->val && isMirror(left->left, right->right) && isMirror(right->left, left->right);
   }
   if(root==NULL)
   {
    return true;
   }
   return isMirror(root->left, root->right);
}
