class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      vector<int> answer(nums.size());
int prefix_product = 1;
int suffix_product = 1;
int n = nums.size();

for(int i =0; i<nums.size(); i++){
    answer[i]= prefix_product;
    prefix_product*=nums[i];
}
for(int i =n-1; i>=0; i--){



    answer[i] *= suffix_product;

    suffix_product *= nums[i];
}



    return answer;

}

};
// you can see that it is written to solve without division, means leetcode wants us to know the prefix-suffix pattern 