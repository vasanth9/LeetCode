class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int>hashab;
        int count=0,n=nums1.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                hashab[nums1[i]+nums2[j]]++;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               
                count+=hashab[-(nums3[i]+nums4[j])];
            }
        }
        // for(auto x:hashab){
        //     cout<<x.first<<" "<<x.second<<"\n";
        // }cout<<"\n";
        //  for(auto x:hashcd){
        //     cout<<x.first<<" "<<x.second<<"\n";
        // }
        return count;
    }
};