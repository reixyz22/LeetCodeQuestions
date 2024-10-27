class Solution(object):
    def threeSumClosest(self, nums, target):
        nums = sorted(nums)
        total = 10**5
        #print(nums)
        for i in range(len(nums) - 2):
            left  = i + 1
            right = len(nums) - 1
            while left < right:
                local_total = nums[i] + nums[left] + nums[right]
                #print(nums[i] , nums[left] , nums[right])
                #print(local_total)
                if local_total == target:
                    return local_total
        
                if abs(target - local_total) < abs(target - total):
                    total = local_total
                
                if local_total < target:
                    left += 1
                else:
                    right -=1

        return total
        