class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini = nums[0];
int maxi = nums[0];

for(int x : nums) {
    mini = min(mini, x);
    maxi = max(maxi, x);
}

int b = mini;
int  a = maxi;
while(b!=0){
    int r = a%b;
    a = b;
    b = r;
}
return a ;

    }
};