class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int size = matrix[0].size();
        int k = size-1;
        for(int i = 0; i<size, k >= i; i++, k--){
            for(int j = 0; j <size; j++){
                swap(matrix[k][j],matrix[i][j]);
            }
        }
        for(int i = 0; i<size; i++){
            for(int j = i+1; j <size; j++){
                swap (matrix[j][i],matrix[i][j]);
            }
        }
    }
};
