class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;

        for(int i = 0; i < nums1.size(); i++) {

            int current = nums1[i];
            int nextGreater = -1;

            // find current element inside nums2
            for(int j = 0; j < nums2.size(); j++) {

                if(nums2[j] == current) {

                    // move right and find first greater
                    for(int k = j + 1; k < nums2.size(); k++) {

                        if(nums2[k] > current) {
                            nextGreater = nums2[k];
                            break;
                        }
                    }

                    break;
                }
            }

            ans.push_back(nextGreater);
        }

        return ans;
    }
};