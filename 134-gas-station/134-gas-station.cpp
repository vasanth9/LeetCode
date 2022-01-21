class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int s = 0,total=0,sum=0;
        for(int i=0;i<n;i++){
            if((total=(total-cost[i]+gas[i]))<0){
                s=i+1;sum+=total;total=0;
            }
        }
        if(total+sum<0)return -1;
        return s;
       
    }
};