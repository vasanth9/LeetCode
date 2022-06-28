class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>result;
        for(int i=0;i<m;i++){
            vector<int>col_res;
            for(int j=0;j<n;j++){
                col_res.push_back(matrix[j][i]);
            }
            result.push_back(col_res);
        }
        return result;
    }
};