class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> Hash;
        int n=nums.size();
        int count = 0;
        int max_length = 0;
        
        for(int i=0;i<n;i++){
           count += (nums[i]==1)?1:-1;
            if(count == 0) max_length = max(max_length, i+1);
           if(Hash.find(count) != Hash.end()){
               max_length = max(max_length, i-Hash[count]);
           }
            else{
                Hash[count] = i;
            }
        }

        return max_length;
    }
};