//ROTATE ARRAY

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums,0,nums.size()-1);
        reverse(nums,k,nums.size()-1);
        reverse(nums,0,k-1);
    }
    void reverse(vector<int>& nums, int start,int last){
        int temp ;
        while(start < last){
            temp = nums[start];
            nums[start] = nums[last];
            nums[last] = temp;
            start++;
            last--;
        }
    }
};
//TEMPORARY ARRAY
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int a[nums.size()];
        for(int i = 0; i<nums.size();i++){
            a[(k+i)%nums.size()] = nums[i];
        }
        for(int i = 0; i<nums.size();i++){
            nums[i] = a[i];
        }
        
    }
};
