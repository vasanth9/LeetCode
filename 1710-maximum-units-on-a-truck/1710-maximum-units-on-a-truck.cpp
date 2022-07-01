class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n=boxTypes.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(boxTypes[i][1]<boxTypes[j][1]){
                    swap(boxTypes[i],boxTypes[j]);
                }
            }
        }
        int i=0,ans=0;
        while(truckSize>0&&i<n){
            int z=boxTypes[i][0];
            if(truckSize<z){
                z=truckSize;
            }
            ans=ans+(boxTypes[i][1]*z);
            truckSize-=z;
            
            i++;
        }
        return ans;
    }
};