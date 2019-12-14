class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> s(n+1);
        for(int i=1;i<=n;i++){
            if(i%3 == 0 && i%5 == 0){
                s[i] = "FizzBuzz";
            }
            else{
                if(i%3 == 0){
                    s[i] = "Fizz";
                } 
                else if(i % 5 == 0){
                    s[i] = "Buzz";
                }
                else{
                    s[i] = to_string(i);
                }
            }
        }
        s.erase(s.begin());
        return s;
    }
};
