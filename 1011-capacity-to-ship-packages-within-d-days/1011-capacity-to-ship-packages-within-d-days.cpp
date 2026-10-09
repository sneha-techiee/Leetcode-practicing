class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int left = *max_element(weights.begin(), weights.end());
        int right = 0;
        for(int i = 0; i<weights.size(); i++){
            right+=weights[i];
        }
        while(left<right){
                    int min_capacity = 0;
        int day = 1;
            int mid = left+(right-left)/2; // to track between minimum capacity and maximum capcity 
            for(int i =0; i<weights.size(); i++){
                if((min_capacity + weights[i])<=mid){
min_capacity+=weights[i];
// if condition satisfies keep addin wts 
                }
                else{
                    // group it into next package
                   day++;
                   min_capacity = weights[i];// resettin min_capacity 
                }
               
            }
            if(day<=days){
             right = mid ;
            }
            else{
                left = mid+1;
            }
        }
        return right; // return left would also work cuz left == right eventually 
    }
};