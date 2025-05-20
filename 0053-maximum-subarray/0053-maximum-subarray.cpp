class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int k = 0;
        for(int i = 0; i < nums.size(); i++){
            k += nums[i];
            k = max(nums[i], k);
            sum = max(sum, k);
        }
        return sum;
    }
};