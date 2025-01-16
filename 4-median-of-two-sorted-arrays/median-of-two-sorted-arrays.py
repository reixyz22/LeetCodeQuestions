class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        lst3: List[int] = nums1 + nums2
        lst3 = sorted(lst3)

        if len(lst3) % 2 == 0: #even
            return ( lst3[len(lst3) // 2] + lst3[len(lst3) // 2 - 1] ) / 2
        else:
            return lst3[len(lst3) // 2]