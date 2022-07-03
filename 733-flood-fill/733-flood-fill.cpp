class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        queue<pair<int,int>> q;
        int m=image.size();
        int n=image[0].size();
        q.push({sr,sc});
        
        int t=image[sr][sc];
        
        if(image[sr][sc]==color)return image;
        int e[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        image[sr][sc]=color;
        while(!q.empty()){
            auto point=q.front();
            int r=point.first,c=point.second;
            
            // cout<<r<<" "<<c<<"\n";
            q.pop();
            for(int i=0;i<4;i++){
                int x=r+e[i][0];
                int y=c+e[i][1];
                if(x>=0&&y>=0&&x<m&&y<n&&image[x][y]==t){
                    image[x][y]=color;
                    q.push({x,y});
                }
            }
            
        }
        return image;
    }
};