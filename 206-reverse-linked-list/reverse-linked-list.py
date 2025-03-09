# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reverseList(self, node: Optional[ListNode]) -> Optional[ListNode]:
        previous = None  # Previous node starts as None since the new head's next should be None
        
        while node:
            next_node = node.next
            node.next = previous
            previous = node
            node = next_node

        return previous  # Previous will be the new head of the reversed list
