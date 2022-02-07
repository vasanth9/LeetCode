class Solution {
public:
    char findTheDifference1(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int l=t.size();
        for(int i=0;i<l-1;i++){
            if(s[i]!=t[i]) return t[i];
        }
        return t[l-1];
    }
    public:
    char findTheDifference(string s, string t) {
        char c=0;
        for(char x:s)c^=x;
        for(char x:t)c^=x;
        return c;
        
    }
};