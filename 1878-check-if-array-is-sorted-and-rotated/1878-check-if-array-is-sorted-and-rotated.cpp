class Solution {
public:
    bool check(vector<int>& nums) {
        int m = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i]<=nums[m])
                m = i;
        }
        while(m > 0 && nums[m-1]==nums[m]){
            m--;
        }

        for(int i = 1; i < n; i++){
            int j = (i+m)%n;
            int k = (i+m-1)%n;
            cout << j << ' ' << k << endl;
            if(nums[j] < nums[k]) return false;
        }
        return true;
    }
};