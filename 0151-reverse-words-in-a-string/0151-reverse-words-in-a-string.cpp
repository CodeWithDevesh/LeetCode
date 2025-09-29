class Solution {
public:
    string reverseWords(string s) {
        vector<string> vec;
        string a;
        int n = s.size();
        for (int i = 0; i < n;) {
            while (i < n && s[i] == ' ')
                i++;
            while (i < n && s[i] != ' ') {
                a += s[i];
                i++;
            }
            if (a.size() > 0)
                vec.push_back(a);
            a = "";
        }
        string ans;
        for (int i = vec.size() - 1; i > 0; i--) {
            ans += vec[i];
            ans += ' ';
        }
        if (vec.size() > 0)
            ans += vec[0];
        return ans;
    }
};