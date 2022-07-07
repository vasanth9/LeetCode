class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int n1=s1.length(),n2=s2.length(),n3=s3.length();
        if(n1+n2!=n3) return false;
        bool dp[n2+1];
        for (int i = 0; i <= n1; i++) {
            for (int j = 0; j <= n2; j++) {
                if (i == 0 && j == 0) {
                    dp[j] = true;
                } else if (i == 0) {
                    dp[j] = dp[j - 1] && s2[j - 1] == s3[i + j - 1];
                } else if (j == 0) {
                    dp[j] = dp[j] && s1[i - 1] == s3[i + j - 1];
                } else {
                    dp[j] = (dp[j] && s1[i - 1] == s3[i + j - 1]) || (dp[j - 1] && s2[j - 1] == s3[i + j - 1]);
                }
            }
        }
        return dp[n2];
    }

};