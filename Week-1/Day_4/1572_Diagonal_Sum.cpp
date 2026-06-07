class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int col = mat[0].size() -1;
        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[i].size(); j++){
                if(i == j || j == col){
                    sum += mat[i][j];
                }
            }
            col--;
        }

        return sum;
    }
};
