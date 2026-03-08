class Solution {
public:
    void expand(string &s, int l, int r, int& m, string& ans) {

        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            if(r-l+1 > m){
                m = r-l+1;
                ans = s.substr(l, m);
            }
            l--;
            r++;
        }
    }

    string longestPalindrome(string s) {
        string ans = "";
        int m = 0;

        for (int i = 0; i < s.size(); i++) {
            expand(s, i, i, m, ans);     // odd length
            expand(s, i, i + 1, m, ans); // even length
        }

        return ans;
    }
};