class Solution {
public:
    bool isPossible(int diff, vector<int>& price, int k) {
        int placed = 1;
        int last = 0;
        for (int i = 1; i < price.size(); i++) {
            if (price[i] - price[last] >= diff){
                placed++;
                last = i;
            }
            if(placed == k) break;
        }
        if (placed >= k)
            return true;
        return false;
    }

    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(), price.end());
        int n = price.size();
        int l = 0, r = price[n - 1] - price[0];

        while (r >= l) {
            int mid = (r + l) / 2;
            if (isPossible(mid, price, k))
                l = mid + 1;
            else
                r = mid - 1;
        }

        return r;
    }
};