# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        if head==None:
            return head
        # count the number of node
        fast=head
        for _ in range(0,n):
            fast=fast.next
        
        if fast==None:
            # delete the head node
            return head.next
        slow=head
        while fast.next!=None:
            fast=fast.next
            slow=slow.next
        

        targetNode=slow.next
        slow.next=targetNode.next
        return head


        