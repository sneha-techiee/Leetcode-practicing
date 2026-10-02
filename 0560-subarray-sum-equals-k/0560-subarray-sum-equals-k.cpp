class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
vector<int>prefix_sum;
int sum = 0;
for(int i =0;i<nums.size(); i++){
sum+=nums[i];
prefix_sum.push_back(sum);
}
unordered_map<int, int>mp;
 int count = 0;
      mp[0] = 1;
for(int j =0; j<prefix_sum.size(); j++){
            int needed = prefix_sum[j] - k;

            if(mp.find(needed) != mp.end()){
                count += mp[needed];
            }

            mp[prefix_sum[j]]++;
        }

        return count;

         
    }
};