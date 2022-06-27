class Solution {
public:
    int searchInsert1(vector<int>& nums, int target) {
        int result=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<target)result++;
            else if(nums[i]==target)return i;
        }return result;
    }
    public:
    int searchInsert(vector<int>& nums, int target) {
        int result=0,n=nums.size();
        int start=0,end=n-1,mid=(start+end)/2;
        while(start<=end){
            mid=(start+end)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]<target) start=mid+1;
            else end=mid-1;
        }
        return start;
    }
};