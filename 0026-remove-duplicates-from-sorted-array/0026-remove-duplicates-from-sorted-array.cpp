class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 1, r = 1;
        int n = nums.size();
        for(; r < n; r++){
            if(nums[r] != nums[r-1]){
                nums[l] = nums[r];
                l++;
            }
        }
        return l;
    }
};