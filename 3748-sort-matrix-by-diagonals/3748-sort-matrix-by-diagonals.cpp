class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int i = 0;
        int j = 0;
        int n = grid.size();
        vector<vector<int>> u(n-1), l(n);
        for (j = 1; j < n; j++) {
            for (int a = 0, k = 0; a < n && k + j < n;) {
                u[j - 1].push_back(grid[a][j + k]);
                k++;
                a++;
            }
            sort(u[j - 1].begin(), u[j - 1].end());
            for (int a = 0, k = 0; a < n && k + j < n;) {
                grid[a][j + k] = u[j - 1][a];
                k++;
                a++;
            }
        }
        j = 0;
        for (i = 0; i < n; i++) {
            for (int a = 0, k = 0; a + i < n && k < n;) {
                l[i].push_back(grid[a + i][k]);
                k++;
                a++;
            }
            sort(l[i].begin(), l[i].end(), greater<int>());
            for (int a = 0, k = 0; a + i < n && k < n;) {
                l[i].push_back(grid[a + i][k]);
                grid[a + i][k] = l[i][k];
                k++;
                a++;
            }
        }
        return grid;
    }
};