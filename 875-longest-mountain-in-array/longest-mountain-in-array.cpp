class Solution {public: int longestMountain(vector<int>& arr) {

    int max_height = 0;
    int height = 0;
    bool peak = false;
    bool ascend = false;

       for(int i = 0; i < arr.size() - 1;i++){ //loop
            if (arr[i+1] == arr[i]  ){ //flat
                height = 0;
                peak = false;
                ascend = false;
            }
            else if (arr[i+1] > arr[i] && peak == true){ // you already peaked but now you're trying to climb again, cut this mountain off
                if( height >= max_height){ max_height = height + 1;} //if biggest mountain so far
                height = 0;
                peak = false;
                ascend = false;
                i--;
            }
            else if( arr[i+1] > arr[i] && peak == false){ //ascend
               ascend = true;
               height++;
            }
            else if( arr[i+1] < arr[i] && ascend == true){ //descend
                peak = true;
                height++;
                if( height >= max_height){ max_height = height +1;} //if biggest mountain so far
            } 
        } 
    return max_height;
}};