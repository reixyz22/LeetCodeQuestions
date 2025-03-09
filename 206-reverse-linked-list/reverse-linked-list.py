# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None:
            return head

        my_list = [] # store nodes in a list

        while head:
            my_list.append(head) # add nodes to the list
            head = head.next
        
        # print(my_list) # should be a list of nodes in order with one dummy node at the start

        for i, node in enumerate(my_list):
            if i == 0:
                node.next = None
            else:
                node.next = my_list[i-1]
        
        # print( my_list[len(my_list) -1 ]  )
        return my_list[len(my_list) -1]