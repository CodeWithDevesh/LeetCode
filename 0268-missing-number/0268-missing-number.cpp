class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = nums[0];
        ans = 0 ^ ans;
        for(int i = 1; i < nums.size(); i++){
            ans = nums[i] ^ ans;
            ans = i ^ ans;
        }
        ans = nums.size() ^ ans;
        return ans;
    }
};