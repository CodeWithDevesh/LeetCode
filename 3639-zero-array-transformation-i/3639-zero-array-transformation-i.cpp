class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> blah(n, 0);
        for(auto q : queries){
            blah[q[0]]--;
            if(++q[1] < n) blah[q[1]]++;
        }
        
        if(blah[0]+nums[0] > 0) return false;
        for(int i = 1; i < n; i++){
            blah[i] += blah[i-1];
            if(blah[i]+nums[i] > 0) return false;
        }
        return true;
    }
};