int Solution::minDistance(string A, string B) {
    int dp[A.length()+1][B.length()+1];
    int m=A.length();
    int n=B.length();
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0)
                dp[i][j]=j;
            else if(j==0)
                dp[i][j]=i;
            else if(A[i-1]==B[j-1])
                dp[i][j]=dp[i-1][j-1];
            else
            {
                dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
            }
        }
    }
    return dp[m][n];
}
