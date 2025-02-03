class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans(nums.size());

        int l = 0, e = 0, h = nums.size();

        for (auto n : nums) {
            if (n < pivot)
                e++;
            else if (n > pivot)
                h--;
        }

        for (auto n : nums) {
            if (n < pivot)
                ans[l++] = n;
            else if (n == pivot)
                ans[e++] = n;
            else
                ans[h++] = n;
        }

        return ans;
    }
};