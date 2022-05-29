class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros=0,ones=0;
        for(int x:nums){
            if(x==0)zeros++;
            else if(x==1)ones++;
        }
        for(int i=0;i<zeros;i++){
            nums[i]=0;
        }
        ones+=zeros;
        for(int i=zeros;i<ones;i++){
            nums[i]=1;
        }
        int n=nums.size();
        for(int i=ones;i<n;i++){
            nums[i]=2;
        }
    }
};