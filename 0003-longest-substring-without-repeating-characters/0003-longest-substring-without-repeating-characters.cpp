class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0;
        unordered_map<char, int> freq;
        int ans = 0;
        
        while(r < s.size()){
            char x = s[r];
            freq[x]++;

            while(freq[x] > 1){
                freq[s[l]]--;
                l++;
            }
            ans = max(ans, r-l+1);
            
            r++;
        }
        return ans;
    }
};