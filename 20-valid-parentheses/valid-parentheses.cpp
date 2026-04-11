class Solution {
public:
    bool isValid(string s) {
        stack <char> st; // Stack to store opening brackets
        
        for(int i = 0; i < s.size(); i++){
            // If opening bracket, push into stack
            if(s[i] == '{' || s[i] == '[' || s[i] == '('){
                st.push(s[i]);
                continue;
            }
            // If stack is empty
            if(st.empty()) return false;
            // Check matching for '[', '{', '('
            if(st.top() == '['){
                if(s[i] != ']') return false;
            }
            else if(st.top() == '{'){
                if(s[i] != '}') return false;
            }
            else if(st.top() == '('){
                if(s[i] != ')') return false;
            }
            st.pop(); // Remove matched opening bracket
        }
       
        return st.empty(); // Valid if no unmatched brackets remain
    }
};