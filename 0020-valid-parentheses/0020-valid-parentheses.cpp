class Solution {
public:
    bool inverse(char ch, char st){
        if(ch == ')' && st == '(') return true;
        if(ch == ']' && st == '[') return true;
        if(ch == '}' && st == '{') return true;
        return false;
    }
    bool isValid(string s) {
        stack<char> st;

        for(auto ch : s){
            if(!st.empty() && inverse(ch, st.top())){
                st.pop();
            }else
                st.push(ch);
        }
        if(st.empty()) return true;
        return false;
    }
};