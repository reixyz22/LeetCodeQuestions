class Solution:
    def findMedianSortedArrays(self, nums1: list[int], nums2: list[int]) -> float:
        combined_length = len(nums1) + len(nums2)
        required_moves = combined_length // 2 + 1

        if combined_length % 2 == 0:
            one_more = True
        else:
            one_more = False

        top_count = 0
        bottom_count = 0

        middle = -1
        prev = -1  # To store the previous element for even-length arrays

        while True:
            # Check for out-of-bounds
            if top_count >= len(nums1):
                current = nums2[bottom_count]
                bottom_count += 1
            elif bottom_count >= len(nums2):
                current = nums1[top_count]
                top_count += 1
            else:
                if nums1[top_count] > nums2[bottom_count]:
                    current = nums2[bottom_count]
                    bottom_count += 1
                else:
                    current = nums1[top_count]
                    top_count += 1

            if top_count + bottom_count == required_moves:
                if not one_more:
                    return current
                else:
                    # Combine the two middle elements for even-length arrays
                    return (prev + current) / 2

            # Update the previous element
            prev = current

