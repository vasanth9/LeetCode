class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0,longest=0,length=s.size();
        int seen[256]={0};
        
        while(right<length){
          seen[s[right]]++;
          while(seen[s[right]]>1){
              seen[s[left]]--;
              left++;
          }
        longest=max(longest,right-left+1);
        right++;
        }

        return longest;
    }
};