class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        string a;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            a += s[i];
            if (s[i] == '(') {
                cnt++;
            } else {
                cnt--;
            }
            if (cnt == 0) {
                if (a.size() > 2)
                    ans += a.substr(1, a.size() - 2);
                a = "";
            }
        }
        return ans;
    }
};