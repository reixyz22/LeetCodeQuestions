class Solution {public:
int networkDelayTime(vector<vector<int>>& times, int n, int k){

int dFS[100] = { -2 }; //distance from source
for(int i=0; i <n;i++){
    dFS[i] = -1;
} //.. Line 5: Char 9: error: variable-sized object may not be initialized work around
dFS[k -1] = INT_MIN;   
    
for(int i =0; i < times.size();i++){ //initial distance setter
    if (times[i][0] == k){
        dFS[times[i][1] -1] = times[i][2];
    }   
}
    
for(int k =0; k < n;k++){ 
    for(int i = 0; i < n ;i++){
        for(int j = 0; j < times.size();j++){ //loop through the main vektor again
            if(
                (times[j][1] == i + 1) && //if the destination value matches the empty value
                (dFS[times[j][0] - 1] != -1) && //and the source node to this empty value has a connection to the main source
                (times[j][2] + dFS[times[j][0] -1] < dFS[i] || dFS[i] == -1) && //and this is the smallest total distance you've seen
                (dFS[times[j][0] -1] != INT_MIN) // also not including the infinitely small path to itself in the equation..
            ){
                dFS[i] = times[j][2] + dFS[times[j][0] -1];
            }  
        }
    }
}

int max = -1;
for(int i=0;i < n;i++){
    if(dFS[i] == -1){return -1;}
    if(dFS[i] > max){
        max = dFS[i];
    }
}
return max;
    }
};