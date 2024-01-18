class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output(2,0); //this vector will store the solution
        for(int i =0; i < nums.size();i++){ //loop through nums once
            //if(nums[i] <= target){ //potential time save
                for(int j= 0; j < nums.size();j++){ //loop through again to add every valid combo together
                    if(i==j){break;} //don't add nums[i] to itself as this is an invalid combo
                        
                    if (nums[i] + nums[j] == target){ //we found the solution on this case
                        output[0] = i; //slot into output aray
                        output[1] = j;
                        return output;
                    }
                }
            //}
        }
    return output;
    }
};