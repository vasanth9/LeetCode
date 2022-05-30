class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        for(int i=0;i<n;i++){
            cout<<intervals[i][0]<<" "<<intervals[i][1]<<"\n";
        }
        for(int i=0;i<n;i++){
            vector<int>x;
            x.push_back(intervals[i][0]);
            int max=intervals[i][1];
            while(i<n-1&&max>=intervals[i+1][0]){
                i++;
                if(max<intervals[i][1]){
                    max=intervals[i][1];
                }
            }
            x.push_back(max);
            result.push_back(x);
        }
        return result;
    }
};