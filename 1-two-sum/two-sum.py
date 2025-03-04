class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        iset = {}

        for i, num in enumerate(nums):
            iset[num] = i
        for i, num in enumerate(nums):
            new_target = target - num
            if new_target in iset:
                if i != iset[new_target]:
                    return [i, iset[new_target]]