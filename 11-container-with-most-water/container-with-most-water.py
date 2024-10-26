class Solution:
    @staticmethod
    def volume_calc(left, right, heights):
        distance = right - left
        top = min(heights[left], heights[right])
        return top * distance

    def maxArea(self, heights):
        volume = 0
        left = 0
        right = len(heights) - 1

        while left < right:
            local_volume = Solution.volume_calc(left, right, heights)
            volume = max(volume, local_volume)
            if heights[left] > heights[right]:
                right -= 1
            else:
                left += 1

        return volume
