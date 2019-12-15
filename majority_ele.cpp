class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int,int> m;
        unordered_map<int,int>::iterator it;
        for(int i=0; i < nums.size();i++) {
            it = m.find(nums[i]);
            if(it != m.end()){
                it->second++;
                if(it->second > floor(nums.size()/2)) {
                    return it->first;
                }
            } else {
                m[nums[i]] = 1;
            }
        }
        return nums[0];
    }
};
