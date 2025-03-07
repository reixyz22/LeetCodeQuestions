# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def searchBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:

        def binary_s(node: Optional[TreeNode]):
            if node:
                if node.val == val:
                    return node

                if node.val < val: # node smaller than val
                    return binary_s(node.right) # move right to look for larger numbers
                if node.val > val:
                    return binary_s(node.left)
            return
        
        return binary_s(root)