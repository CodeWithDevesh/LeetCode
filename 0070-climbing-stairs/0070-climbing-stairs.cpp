class Solution {
public:
    
    int blah(int n, vector<int> &arr){
        if(n == 1) return 1;
        if(n == 2) return 2;
        if(arr[n] != -1) return arr[n];
        arr[n] = blah(n-1, arr) + blah(n-2, arr);
        return arr[n];
    }

    int climbStairs(int n) {
        vector<int> arr(n+1, -1);
        return blah(n, arr);
    }
};