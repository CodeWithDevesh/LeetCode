void sw(int& a, int& b){
    a = a-b;
    b = a+b;
    a = b-a;
}

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0, m = 0, r = nums.size()-1;

        for(m = 0; m <= r; m++){
            if(nums[m] == 0){
                if(m != l)
                sw(nums[m], nums[l]);
                l++;
            }

            if(nums[m] == 2){
                if(m != r)
                sw(nums[m], nums[r]);
                r--;
                m--;
            }
        }
    }
};