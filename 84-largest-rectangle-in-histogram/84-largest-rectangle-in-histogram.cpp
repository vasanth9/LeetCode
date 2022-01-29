class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int> s;
        int maxi=0;
        heights.push_back(0);
        s.push(0);
        
        for(int i=0;i<=n;i++){
           
            while(!s.empty()&&heights[s.top()]>=heights[i]){
                
              int h=heights[s.top()];
                s.pop();
              int d = !s.empty()? s.top(): -1;
              int width = i-d-1;
              maxi = max(maxi, h*width);
               //cout<<maxi<<"\n";
            }
              s.push(i);
           
        }
       
        return maxi;
    }
};