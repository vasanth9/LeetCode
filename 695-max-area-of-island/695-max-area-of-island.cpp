class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int e[4][2]={{-1,0},{0,-1},{1,0},{0,1}};
        int maxi=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]){
                    //cout<<i<<" "<<j<<"\n";
                    int count=1;
                    queue<pair<int,int>>q;
                    grid[i][j]=0;
                    q.push(make_pair(i,j));
                    while(!q.empty()){
                        int rf=q.front().first;
                        int c=q.front().second;
                    q.pop();
                    for(int k=0;k<4;k++){
                        int x=rf+e[k][0];
                        int y=c+e[k][1];
                        if(x>=0&&y>=0&&x<m&&y<n&&grid[x][y]){
                            count++;
                            grid[x][y]=0;
                            q.push(make_pair(x,y));
                        }
                    }
                }
                maxi=max(maxi,count);
            }}
        }
        return maxi;
    }
};