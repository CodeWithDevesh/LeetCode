class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int cnt = 0;
        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b) {
            // if (a[1] == b[1]) return a[0] < b[0];
            return a[1] < b[1];
        });

        int end = INT_MIN;
        for(auto it : intervals){
            if(it[0] >= end){
                cnt++;
                end = it[1];
            }
        }
        return intervals.size() - cnt;
    }
};