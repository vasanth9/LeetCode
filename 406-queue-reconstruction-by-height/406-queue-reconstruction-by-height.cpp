class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end());

        int n=people.size();
        vector<vector<int>>result;
        for(int i=0;i<n;i++){
            vector<int>x;
            x.push_back(-1);
            x.push_back(-1);
            result.push_back(x);
        }
        for(int i=0;i<n;i++){
            int x=0;
            int z=people[i][1];
            for(int m=0;m<n;m++){
                if(result[m][0]==-1||result[m][0]==people[i][0]){
                    x++;
                    if(x==z+1){
                        result[m][0]=people[i][0];
                        result[m][1]=people[i][1]; 
                    }
                }
            }
           
            
           
        }
        return result;
    }
};