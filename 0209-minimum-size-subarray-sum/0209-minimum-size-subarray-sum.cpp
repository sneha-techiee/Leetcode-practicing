class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int i =0;
       int sum =0;
       int currentcount =0 ;
       int j =0;
int minimum = INT_MAX;
    while(i<nums.size()){
        
sum+=nums[i];
currentcount++;
i++;


    
while(sum>=target){
    minimum = min(minimum, currentcount);
     sum-=nums[j];
     j++;
    currentcount--;

}
    }
    if(minimum == INT_MAX){
        return 0;


    }
    return minimum;
    
    
    }};