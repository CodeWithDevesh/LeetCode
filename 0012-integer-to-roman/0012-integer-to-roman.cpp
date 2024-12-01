
class Solution {
public:
vector<string> v4 = {
    "", "M", "MM", "MMM"
};
vector<string> v3 = {
    "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"
};
vector<string> v2 = {
    "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"
};
vector<string> v1 = {
    "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"
};
    string intToRoman(int num) {
        string ans = "";
        string str = to_string(num);
        int size = str.length();
        if(size - 4 >= 0)
            ans += v4[str[0]-'0'];
        if(size - 3 >= 0)
            ans += v3[str[size - 3] - '0'];
        if(size - 2 >= 0)
            ans += v2[str[size - 2] - '0'];
        if(size - 1 >= 0)
            ans += v1[str[size - 1] - '0'];

        return ans;
    }
};