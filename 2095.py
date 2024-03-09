class Solution:
    def middleNode(self,head:Optional[ListNode]) -> Optional[ListNode]:

        if head==None:
            return head
        slow=head
        fast=head

        while fast!=None and fast.next!=None:
            slow=slow.next
            fast=fast.next.next

        return slow


    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:

        if head==None:
            return head
        
        targetNode=self.middleNode(head)
        if targetNode.next==None:
            if targetNode==head:
                return None
            else:
                head.next=None
                return head
        targetNode.val=targetNode.next.val
        targetNode.next=targetNode.next.next

        return head
         