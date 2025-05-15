class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];

        sort(nums.begin(), nums.end());
        int n = nums.size();
        int maxCount = n/2;
        int count = 1;
        int ans = nums[0];

        for(int i = 1; i < n; i++){
            if(nums[i] == nums[i-1]){
                count++;
                continue;
            }

            if(count > maxCount){
                return nums[i-1];
            }
            count = 1;
        }
        return nums[n-1];
    }
};