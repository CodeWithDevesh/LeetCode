class Solution {
public:

    void getMaxFreq(map<char, int> &freq, int &maxFreq){
        int temp = 0;
        for(auto x : freq){
            temp = max(temp, x.second);
        }
        maxFreq = temp;
    }

    int characterReplacement(string s, int k) {
        map<char, int> freq;
        int left = 0, right = 0;
        int ans = 0;
        int maxFreq = 0;

        while (right < s.size()) {
            maxFreq = max(maxFreq, ++freq[s[right]]);
            
            while(right - left + 1 - maxFreq > k){
                freq[s[left]]--;
                getMaxFreq(freq, maxFreq);
                left++;
            }
            ans = max(ans, right - left + 1);

            right++;
        }

        return ans;
    }
};