class Solution:
    def fourSum(self, nums, target):
        nums.sort()  # Sorting helps manage duplicates effectively.
        results = []
        self.find_combinations(nums, target, 4, [], results, 0)
        return results

    def find_combinations(self, nums, target, group_size, current_combination, results, start):
        if len(current_combination) == group_size:
            if sum(current_combination) == target:
                if current_combination not in results:  # Check to ensure only unique combinations are added
                    results.append(list(current_combination))
            return

        for i in range(start, len(nums)):
            if i > start and nums[i] == nums[i - 1]:  # Skip duplicates to prevent adding the same combinations
                continue
            # Check if the current element can potentially form a valid combination
            if len(current_combination) + 1 < group_size:
                if i + group_size - len(current_combination) - 1 >= len(nums):
                    break  # Not enough elements left to form a valid combination
                if sum(current_combination) + nums[i] + sum(nums[i+1:i+1+(group_size-len(current_combination)-1)]) > target:
                    continue
            if len(current_combination) == group_size - 1 and sum(current_combination) + nums[i] != target:
                continue
            current_combination.append(nums[i])
            self.find_combinations(nums, target, group_size, current_combination, results, i + 1)
            current_combination.pop()  # Backtrack after exploring this path