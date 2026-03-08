class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long long a = x;
        long long y = 0;
        while(x){
            cout << y << endl;
            y = (y*10) + (x%10);
            x /= 10;
        }
        return y == a;
    }
};