class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        long long n = nums.size() / 2;
        vector<int> pos(n), neg(n);
        long long j = 0, k = 0;
        for(long long i = 0; i < 2*n; i++){
            if(nums[i] > 0){
                pos[k] = nums[i];
                k++;
            }else{
                neg[j] = nums[i];
                j++;
            }
        }
        for(long long i = 0; i < n; i++){
            nums[2*i] = pos[i];
            nums[(2*i)+1] = neg[i];
        }
        return nums;
    }
};