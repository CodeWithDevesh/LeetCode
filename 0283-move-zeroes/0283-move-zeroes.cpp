class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0, r=0;
        int n = nums.size();
        for(r = 0; r < n; r++){
            if(nums[r] != 0){
                nums[l] = nums[r];
                l++;
            }
        }
        for(;l<n;l++){
            nums[l] = 0;
        }
        
    }
};