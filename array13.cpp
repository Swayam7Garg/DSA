//stock buy and sell for maximum profit
#include<bits/stdc++.h>
using namespace std;
int MaximumProfit(vector<int> prices){
    int n = prices.size();
    int buy = INT_MAX; // when to buy stock 
    int max_profit = 0;// to return maximum profit after analyzing the all the scenarios for profit

    for(int i = 0 ; i < n; i++){
        buy = min(buy , prices[i]); //to buy on the minimum cost
        int sell = prices[i] - buy; //selling profit  = current price of stock - buying price of stock
        max_profit = max(max_profit , sell); //getting the maximum profit
    }
    
    return max_profit;
}
int main(){
    vector<int> arr = {6,2,1,7,8,6,9,4};
    cout<<"The maximum profit from prices of stocks will be : "<<MaximumProfit(arr);
    return 0;
}