class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        if(strs.size() == 1) return strs[0];
        string s ="";
        char a;
        for(int i = 0 ; i < strs[0].length(); i++){
            a = strs[0][i];
            for(int k = 1; k <strs.size(); k++){
                if(i < strs[k].length() && a == strs[k][i]){
                    continue;
                }
                else{
                    return s;
                }
            }
            s += a;
        }
        return s;
    }
};
