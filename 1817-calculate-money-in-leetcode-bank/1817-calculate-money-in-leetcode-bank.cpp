class Solution {
public:
    int totalMoney(int n) {
        int a = 1;
        int ans = 1;
        for (int i = 1; i < n; i++) {
            if (i % 7 == 0)
                a++;
            ans += a + (i % 7);
        }
        return ans;
    }
};