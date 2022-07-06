class Solution {
public:
    int fib1(int n) {
        //recurrsive
        if(n==0) return 0;
        if(n==1) return 1;
        else return fib(n-1)+fib(n-2);
    }
 public:
    int fib(int n) {
        //DP
        if(n==0)return 0;
        
        int DP[n+1];
        DP[0]=0;
        DP[1]=1;
        for(int i=2;i<=n;i++){
            DP[i]=DP[i-1]+DP[i-2];
        }
        return DP[n];
    }
   
    
};