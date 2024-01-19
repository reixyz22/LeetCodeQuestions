class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int run = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            run += nums[i];
            nums[i] = run;
        }
        return nums;
    }
};