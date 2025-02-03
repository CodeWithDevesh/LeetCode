class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int n = points.size();
        int m = queries.size();
        vector<int> ans(m, 0);

        for(int j = 0; j < m; j++){
            for(int i = 0; i < n; i++){
                int x = points[i][0];
                int y = points[i][1];

                int val = pow((x-queries[j][0]), 2) + pow((y-queries[j][1]), 2) - pow(queries[j][2], 2);
                if(val <= 0) ans[j]++; 
            }
        }
        return ans;
    }
};