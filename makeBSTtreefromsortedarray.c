/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* sortedArrayToBST(int* nums, int numsSize)
{
    struct TreeNode* createNode(int val) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
        struct TreeNode* sorted(int* num, int start, int end)
        {
            if (start>end)
            {
                return NULL;
            }
            int mid = (start+end)/2; 
            struct TreeNode* root = createNode(num[mid]);
            root->left= sorted(num, start, mid-1);
            root->right= sorted(num, mid+1, end);
            return root;
        }
    return sorted(nums, 0, numsSize-1); 
}
