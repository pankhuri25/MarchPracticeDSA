class Solution {
public:

    bool isPair(char start, char end){
        if(start=='(' && end==')') return true;
        else if (start=='[' && end==']') return true;
        else if (start=='{' && end=='}') return true;
        return false;
    }
    bool isValid(string s) {
        stack<char> st;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else if(s[i]==')' || s[i]=='}' || s[i]==']'){
                if(st.empty() || !isPair(st.top(),s[i])){
                    return false;
                }
                else{
                    st.pop();
                }
            }
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};
