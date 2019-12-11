class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int x;
        vector<int> v;
        unordered_map<int,int>::iterator it;
        for(int i = 0;i<nums.size();i++){
            x = target - nums[i];
            it = m.find(x);
            if(it == m.end()){
                m[nums[i]] = i;
            }
            else{
                v.push_back(it->second);
                v.push_back(i);
            }
        }
        return v;
    }
};
