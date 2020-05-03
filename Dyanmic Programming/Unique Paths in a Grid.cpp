int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) {
    int s[A.size()][A[0].size()];
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            s[i][j]=0;
        }
    }
    if(A[0][0]==0)
        s[0][0]=1;
    else
        return 0;
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            if(i==0 && j==0)
                continue;
            s[i][j]=0;
            if(A[i][j]==1)
                s[i][j]=0;
            else if((i-1)>=0)
                s[i][j]+=s[i-1][j];
            else if((j-1)>=0)
                s[i][j]+=s[i][j-1];
        }
    }
    return s[A.size()-1][A[0].size()-1];
}
