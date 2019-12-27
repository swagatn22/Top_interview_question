class Solution {
public:
    int evalRPN(vector<string>& tokens) { 
        stack<int>s;
        int a;
        int b;
        for(int i = 0; i< tokens.size();i++){
            if(tokens[i] != "+" && tokens[i] != "*" && tokens[i]!= "-" && tokens[i] != "/"){
                s.push(stoi(tokens[i]));
            }
            else{
                a = s.top(); s.pop();
                b = s.top(); s.pop();
                if(tokens[i] == "+"){
                    s.push(a+b);
                }
                else if(tokens[i] == "-"){
                    s.push(b-a);
                }
                else if(tokens[i] == "*"){
                    s.push(a*b);
                }        
                else{
                    s.push(b/a);
                }        
            }
        }
        return s.top();
    }

};
