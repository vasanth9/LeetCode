class Solution {
public:
    int candy(vector<int>& R) {
        int n = R.size();
        int ans=n-1;
        int a[n],b[n],c[n];a[0]=1;b[n-1]=1;
        for(int i=0;i<n;i++){
            if(i>0){
                R[i]>R[i-1]?a[i]=a[i-1]+1:a[i]=1;
            }
            if(ans<n-1){
                R[ans]>R[ans+1]?b[ans]=b[ans+1]+1:b[ans]=1;
            }
            ans--;
        }
        for(int i=0;i<n;i++){
            c[i]=max(a[i],b[i]);
        }
        return accumulate(c,c+n,0);
    }
};