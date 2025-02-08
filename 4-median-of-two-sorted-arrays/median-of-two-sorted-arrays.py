class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:

        lst3 = sorted(nums1 + nums2) # just combine them as python does this pretty fast

        if len(lst3) % 2 == 0:
            return (lst3[len(lst3) // 2] + lst3[len(lst3) // 2 - 1] ) / 2 # middle of an even length array ex [1, 2, 3, 4] -> 2 + 3 // 2 = 5 / 2 = 2.5 
        else:
            return lst3[len(lst3) // 2] # middle of odd array