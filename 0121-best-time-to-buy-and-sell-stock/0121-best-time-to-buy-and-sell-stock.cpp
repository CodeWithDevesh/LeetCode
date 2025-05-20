class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int l = INT_MAX;
        for(int i = 0; i < prices.size(); i ++){
            l = min(l, prices[i]);
            ans = max(ans, prices[i] - l);
        }
        return ans;
    }
};