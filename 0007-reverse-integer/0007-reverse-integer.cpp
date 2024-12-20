class Solution {
public:
    int reverse(int x) {
        string s;
        string a = to_string(x);
        if (a[0] == '-') {
            s += '-';
        }
        for (int i = a.size() - 1; i >= 0; i--) {
            if (a[i] == '-')
                continue;
            s += a[i];
        }
        int out;
        try {
            out = stoi(s);
        } catch (exception e) {
            return 0;
        }

        return out;
    }
};