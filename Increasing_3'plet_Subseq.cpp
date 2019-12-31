class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size() == 0) return false;
        int count =0;
        int first = nums[0];
        int second = INT_MAX;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] > second){
                return true;
            }
            if(nums[i] < first){
                first = nums[i];
            }
            if(nums[i] > first && nums[i] < second){
                second = nums[i];
            }
        }
        return false;
    }
};
