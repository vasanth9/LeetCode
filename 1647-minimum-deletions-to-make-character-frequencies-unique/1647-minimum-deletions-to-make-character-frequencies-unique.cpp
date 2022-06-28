class Solution {
public:
    int minDeletions(string s) {
        int arr[26];
        for(int i=0;i<26;i++){
            arr[i]=0;
        }
        for(char x:s){
            arr[x-'a']++;
        }
        sort(arr,arr+26);
        set<int>x;
        int result=0;
        for(int i=25;i>=0;i--){
            int z=arr[i];
            if(arr[i]!=0){
                auto it=x.find(z);
                while(z!=0&&it!=x.end()){
                    it=x.find(--z);
                }
                x.insert(z);
                //cout<<z;
                if(z!=arr[i])
                result+=(arr[i]-z);
                
            }

        }
        
        
        return result;
    }
};