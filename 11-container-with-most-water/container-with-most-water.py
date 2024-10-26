class Solution:
    def maxArea(self, heights):
        volume = 0
        left = 0
        right = len(heights) - 1

        while left < right:
            local_volume = (right - left) * min(heights[left], heights[right]) 
            volume = max(volume, local_volume)
            if heights[left] > heights[right]:
                right -= 1
            else:
                left += 1

        return volume