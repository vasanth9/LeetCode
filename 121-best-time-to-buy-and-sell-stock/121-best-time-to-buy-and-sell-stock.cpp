class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0],max=prices[0],ans=0;
        for(int x:prices){
           
            if(x<min){
                min=x;
               
            }
            if(x-min>ans){
                ans=x-min;
            }
        }
        return ans;
    }
};