class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> ans(r, vector<int>(c));
        int m = mat.size();
        int n = mat[0].size();
        if(m * n != r * c){
            return mat;
        }
        
        int x = 0;
        int y = 0;
        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[i].size(); j++){
                ans[x][y] = mat[i][j];

                if(y == c - 1){
                    x++;
                    y = 0;
                }
                else{
                    y++;
                }
            }
        }

        return ans;
    }
};
