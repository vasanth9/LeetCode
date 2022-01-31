class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = 0;
        for(auto x: accounts){
            auto sum = accumulate(x.begin(),x.end(),0);
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};