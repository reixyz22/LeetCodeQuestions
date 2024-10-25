class Solution(object):
    def threeSum(self, nums):
        solutions = set()
        nums = sorted(nums)
        for i in range(len(nums)-2):
            left = i + 1
            right = len(nums) - 1
            while left < right:
                if nums[i] + nums[left] + nums[right] == 0:
                    solution = (nums[i], nums[left], nums[right])
                    if solution not in solutions:
                        solutions.add(solution)
                    right -= 1
                    left += 1
                elif nums[i] + nums[left] + nums[right] > 0:
                    right -= 1
                elif nums[i] + nums[left] + nums[right] < 0:
                    left += 1
        return list(solutions)