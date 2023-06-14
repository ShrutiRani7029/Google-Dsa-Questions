class Solution {
public:
int maxProfit(vector<int>& prices) {
      int n=prices.size();
      int m=prices[0], profit=0;


      for(int i=1;i<n;i++){
          int cost=prices[i]-m;
          profit = max(profit,cost);
          m=min(m,prices[i]);
      }
      return profit;
}
};
