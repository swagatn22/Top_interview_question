class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size() == 0) return 0;
        int left = 0;
        int max = INT_MIN;
        int sum = 0;
        int right = height.size()-1;
        while(left <= right){
            sum = min(height[left],height[right]) *(right-left);
            if(max < sum){
                max = sum; 
            }
            if(height[left] < height[right]){
                left++;
            }
            else{
                right --;
            }
        }
        return max;
    }
};
