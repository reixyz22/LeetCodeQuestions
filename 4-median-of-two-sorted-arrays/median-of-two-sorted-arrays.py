class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        lst3: List[int] = sorted(nums1 + nums2)
        return ( (lst3[len(lst3) // 2] + lst3[len(lst3) // 2 - 1] ) / 2 if len(lst3) % 2 == 0 else lst3[len(lst3) // 2])