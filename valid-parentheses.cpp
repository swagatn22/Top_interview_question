class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        char c;
        int flag =0;
        if(s.length() == 0){
            return true;
        }
        for(int i=0;i<s.length();i++){
            flag = 0;
            
            if(s[i] == '(' ||s[i] == '{'||s[i] == '[' ){
                st.push(s[i]);
            } else {
                if(!st.empty()){
                    if(st.top() == '[' && s[i] == ']'||
                       st.top() == '{' && s[i] == '}'|| 
                       st.top() == '(' && s[i] == ')'){
                        flag = 1;
                    }
                    else{
                        flag = 0;
                        break;
                    }
                }else {
                    flag = 0;
                }
                if(!st.empty()){
                     st.pop();
                 }
            }
        }
        if(flag && st.empty()){
            return true;
        }
        return false;
        
    }
};
