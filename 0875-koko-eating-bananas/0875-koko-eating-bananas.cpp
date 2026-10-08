class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        
        while(left<right){
          int hours = 0;
            int mid = left+(right-left)/2;
            for(int i = 0; i<piles.size(); i++){
                if(piles[i]<=mid){
                    hours++;

                }
                else{
                    if(piles[i]%mid==0){
                        hours+=piles[i]/mid;
                    }
                    else{
                        hours+=piles[i]/mid + 1;
                    }
                }
                
            }
            if(h>=hours){
                right = mid  ;
            }
            else{
left = mid +1 ;
            }
            }
           return left ; 
        }
    
};