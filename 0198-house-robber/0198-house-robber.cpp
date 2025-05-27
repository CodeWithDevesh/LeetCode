class Solution {
public:
    int r(vector<int>& nums, int a, vector<int>& mem){
        if(a == 1){
            return max(nums[0], nums[1]);
        }else if(a == 0){
            return nums[0];
        }else if(a < 0) return 0;

        if(mem[a] > -1) return mem[a];

        mem[a] = max(nums[a] + r(nums, a-2, mem), nums[a-1] + r(nums, a-3, mem));
        return mem[a];
    }

    int rob(vector<int>& nums) {
        vector<int> f(nums.size(), -1);
        return r(nums, nums.size() - 1, f);
    }
};