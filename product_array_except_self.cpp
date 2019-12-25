class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size());
        left[0] = 1;
        for(int i = 1; i<nums.size(); i++){
            left[i] = nums[i-1]* left[i-1]; 
        }
        int r = 1;
        for(int i = nums.size()-1; i>=0; i--){
            left[i] = r*left[i];
            r = r*nums[i];
        }
        return left;
    }
};
