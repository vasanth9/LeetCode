
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
         vector<int>rows(201,0);
        vector<int>columns(201,0);
    
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    rows[i]=1;
                    columns[j]=1;
                }
            }
        }
    for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(rows[i]==1){
                    matrix[i][j]=0;
                }
                if(columns[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
    
    }
};