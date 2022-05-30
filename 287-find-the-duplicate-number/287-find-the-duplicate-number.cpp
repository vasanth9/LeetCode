class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int,int>hmap;
        for(int i=0;i<n;i++){
            if(hmap[nums[i]]==0){
                hmap[nums[i]]=1;
            }
            else return nums[i];
        }
        return 0;
    }
};