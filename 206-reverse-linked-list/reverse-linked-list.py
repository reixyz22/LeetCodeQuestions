class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # Initialize the previous pointer to None, as the new end of the list will have no next node
        previous = None
        current = head
        # Iterate over the linked list until all nodes are processed
        while current:
            # Temporarily store the next node
            next_node = current.next
            # Reverse the current node's pointer
            current.next = previous
            # Move pointers one position forward
            previous = current
            current = next_node
        # At the end of the loop, 'previous' will point to the new head of the reversed list
        return previous
