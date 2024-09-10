# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        def sort(nums, start, end):
            if start > end:
                return None
            mid = (start+end)//2
            root = TreeNode(nums[mid])
            root.left=sort(nums, start, mid-1)
            root.right=sort(nums, mid+1, end)
            return root
        return sort(nums, 0 , len(nums)-1)
