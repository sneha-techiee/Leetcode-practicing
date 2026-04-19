class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int i=0; i<nums.size(); i++){
            int x = nums[i];
            if(st.find(x)!=st.end()){
                return true;
            }
            st.insert(x);

        }
        return false;
    }


};