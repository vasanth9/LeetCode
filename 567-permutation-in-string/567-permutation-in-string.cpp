class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int g=s2.length(); int l=s1.size();

        if(l>g) return false;
        vector<int> arr(26,0);
        for(int i=0;i<l;i++){
            arr[s1[i]-'a']++;
        }
        for(int j=0;j<=g-l;j++){
           vector<int>brr(26,0);

            for(int i=0;i<l;i++){
                brr[s2[i+j]-'a']++;
            }
            int count=0;
            for(int i=0;i<26;i++){
                if(arr[i]!=brr[i]){
                    count++;
                }
               // cout<<i<<" "<<arr[i]<<" "<<brr[i]<<"\n";
            }
           // cout<<j<<" "<<s2[j]<<count<<"\n\n\n";
            if(count == 0) return true;
        }
        return false;
    }
};