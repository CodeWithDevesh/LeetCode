class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size())
        return false;
        int n = s.size();
        s += s;
        for(int i = 0; i < n; i++){
            if(goal == s.substr(i, n)){
                return true;
            }
        }
        return false;
    }
};