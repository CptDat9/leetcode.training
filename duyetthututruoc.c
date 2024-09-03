/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
   void traverse(struct TreeNode* root, int* result, int* returnSize)
   {
      if(root!=NULL)
      {
        result[(*returnSize)++]=root->val;
        traverse(root->left, result, returnSize);
        traverse(root->right, result, returnSize);
      }

   }
   *returnSize=0;
   int *result=(int*)malloc(101*sizeof(int));
   traverse(root, result, returnSize);
   result = realloc(result,*returnSize * sizeof(int));
   return result;
}
