# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        stack = []
        newHead,newlyHead = head, head
        while newHead:
            stack.append(newHead.val)
            newHead=newHead.next
        i,j=0,0
        while newlyHead:
            if j%2==0:
                newlyHead.val=stack[i]
                i+=1
            else:
                newlyHead.val=stack[i*-1]
            j+=1
            newlyHead=newlyHead.next
        
        
        