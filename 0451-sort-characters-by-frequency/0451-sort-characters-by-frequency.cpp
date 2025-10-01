class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        vector<pair<char, int>> vec;
        for (auto x : s)
            freq[x]++;
        for (auto x : freq) {
            vec.push_back({x.first, x.second});
        }
        sort(vec.begin(), vec.end(),
             [](auto a, auto b) { return a.second > b.second; });
        string ans;
        for (auto x : vec) {
            for (int i = 0; i < x.second; i++)
                ans += x.first;
        }
        return ans;
    }
};