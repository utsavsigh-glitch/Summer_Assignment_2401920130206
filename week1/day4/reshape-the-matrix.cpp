class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> temp;

        for(int i=0;i<mat.size();i++) {
            for(int j =0;j<mat[0].size();j++) {
                temp.push_back(mat[i][j]);
            }
        }

        if(temp.size()!=r*c)
            return mat;

        vector<vector<int>> ans(r, vector<int>(c));
        int k=0;

        for(int i =0;i<r;i++) {
            for(int j =0;j<c;j++) {
                ans[i][j] =temp[k++];
            }
        }

        return ans;
    }
};
