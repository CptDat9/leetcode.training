# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None
#Thuật toán rùa và thỏ, nếu có vòng tròn thì thỏ(fast) sẽ chạy hết vòng tròn và gặp rùa (slow)
class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        fast = head
    
        while fast and fast.next:
            head=head.next
            fast=fast.next.next
            if fast is head:
                return True
        return False 

        
