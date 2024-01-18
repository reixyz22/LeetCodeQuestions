class Solution {public:double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

vector<int> nums3; //solution merged vector
int j = 0;
int k = 0;

while(nums1.size() != 0 && nums2.size() != 0){ //merge
    if(nums2[k] == INT_MAX && nums1[j] == INT_MAX){break;}

    if(nums1[j] <= nums2[k]){
        nums3.push_back(nums1[j]);
        if (j == nums1.size() - 1){nums1[j] = INT_MAX;}
        else{j++;}
    }
    else{
        nums3.push_back(nums2[k]);
        if (k == nums2.size() - 1){nums2[k] = INT_MAX;}
        else{k++;}
    }
}
if (nums1.size() == 0){nums3 = nums2;} //edgecase
if (nums2.size() == 0){nums3 = nums1;}

if(nums3.size() % 2 == 0){ // find median of nums3
    float y = nums3[nums3.size()/2 -1] + nums3[nums3.size()/2];
    return y /2;
}
else{ return nums3[nums3.size()/2];
}

return 0;
}};