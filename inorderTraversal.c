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
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(100 * sizeof(int)); // Giả sử kích thước tối đa là 100
    *returnSize = 0;
     void traverse(struct TreeNode* node) {
        if (node == NULL) {
            return; 
        }
        traverse(node->left); 
        result[(*returnSize)++] = node->val; // Lưu giá trị nút hiện tại
        traverse(node->right); 
    }
    traverse(root);
    return result;
}
