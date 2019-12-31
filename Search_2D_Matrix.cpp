class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0) return false;
        int left = 0;
        int right = matrix[0].size()-1;
        while(left >= 0 && right >= 0 &&  right < matrix[0].size() && left < matrix.size()){
            if(target == matrix[left][right]){
                return true;
            }
            else if(target > matrix[left][right]){
                left++;
            }
            else{
                right--;
            }
        }
        return false;
    }
};
