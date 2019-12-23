class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vec;
        if(strs.size() == 0) return vec;
        unordered_map<string,vector<string>> m;
        unordered_map<string,vector<string>>:: iterator it;
        string temp;
        int k = 1;
        for(int i = 0; i<strs.size();i++){
            vector<string> v;
            temp = strs[i];
            sort(temp.begin(),temp.end());
            it = m.find(temp);
            if(it == m.end()){
                v.push_back(strs[i]);
                m[temp] = v;
            }
            else{
                it->second.push_back(strs[i]);
            }
            
        }
        int j= 0;
        for(auto it = m.begin(); it != m.end(); it++){
            vec.push_back(it->second);
        }
        return vec;
    }
};
