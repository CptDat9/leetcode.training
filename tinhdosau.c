/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if(root == NULL) 
       return NULL;
    int left_depth = maxDepth(root->left);
    int right_depth = maxDepth(root->right);
    return (left_depth > right_depth ? left_depth : right_depth)+1;
}
