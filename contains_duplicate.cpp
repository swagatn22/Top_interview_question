class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_map<int,int> m;
        if(nums.size() == 0){
            return false;
        }
        for(int i= 0; i<nums.size();i++){
            if(m.find(nums[i]) == m.end()){
                m[nums[i]] = i;
            }
            else{
                return true;
            }
        }
        return false;
        
    }
};
