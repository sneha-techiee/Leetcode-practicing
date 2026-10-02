class Solution {
public:
    int maxProfit(vector<int>& prices) {
// i need to buy on a day that after which any day , difference must be maximum and positive 
int i =0;
int current_difference = 0;
int profit = 0;
int j =1;

while(j<prices.size()){
    if(prices[j]<prices[i]){
        i=j;
    }
    current_difference = prices[j]-prices[i];
    profit = max(profit, current_difference);
    j++;
}
return profit;
    }
};