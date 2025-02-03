class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n = score.size();
        int m = score[0].size();

        for(int i = 0; i < n; i++){
            int g = i;
            for(int j = i; j < n; j++){
                if(score[j][k] > score[g][k]){
                    g = j;
                }
            }
            for(int j = 0; j < m; j++){
                int temp = score[i][j];
                score[i][j] = score[g][j];
                score[g][j] = temp;
            }
        }
        return score;
    }
};