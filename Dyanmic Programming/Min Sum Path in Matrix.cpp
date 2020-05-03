int Solution::minPathSum(vector<vector<int> > &a) {
    int m,n;
    m=a.size();
    n=a[0].size();
    int sol[m][n];
    sol[0][0]=a[0][0];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 && j==0)
                continue;
            if(i-1<0)
                sol[i][j]=sol[i][j-1]+a[i][j];
            else if(j-1<0)
                sol[i][j]=sol[i-1][j]+a[i][j];
            else
                sol[i][j]=min(sol[i-1][j]+a[i][j],sol[i][j-1]+a[i][j]);
        }
    }
    cout<<sol[m-1][n-1];
}
