// approach -1 O((M×N)×(M+N)) and O(1) space
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        for(int i = 0; i< matrix.size(); i++){
            for(int j = 0; j <matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    for(int k = 0; k < matrix[0].size();k++){
                        if(matrix[i][k] != 0){
                            matrix[i][k] =  -1000;
                        }
                    }
                    for(int k = 0 ; k <matrix.size(); k++){
                        if(matrix[k][j] != 0){
                            matrix[k][j] = -1000;
                        }
                    }
                }
            }
        }
        for(int i = 0; i< matrix.size();i++){
            for(int j = 0; j <matrix[0].size();j++){
                if(matrix[i][j] == -1000){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};


// approach-2 o(m*n) and O(m+n)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int>row;
        set<int>col;
        for(int i = 0; i< matrix.size();i++){
            for(int j = 0; j <matrix[0].size();j++){
                if(matrix[i][j] == 0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(int i = 0; i< matrix.size();i++){
            for(int j = 0; j< matrix[0].size();j++){
                if(row.find(i) != row.end() || col.find(j) != col.end()){
                    matrix[i][j] = 0;
                }
            }
        }
        
    }
};
