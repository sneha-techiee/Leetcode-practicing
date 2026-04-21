class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
vector<int>merged;
   int i =0;
   int j =0;
   int mid = (m+n)/2;
   while(merged.size()<=mid ){
    if((i<m &&( j>=n || nums1[i]<=nums2[j]))){
merged.push_back(nums1[i++]);
    }
    else{
        merged.push_back(nums2[j++]);
    }

   }
   int total = m+n;
   if(total%2==0){
    return (merged[mid]+merged[mid-1])/2.00;
   }
else{
    return merged[mid];
}

        }
    };