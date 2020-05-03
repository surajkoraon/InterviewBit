int Solution::uniquePaths(int A, int B) {
    int a[A][B];
    for(int i=0;i<A;i++)
    {
        for(int j=0;j<B;j++)
        {
            a[i][j]=0;
        }
    }
    a[0][0]=1;
    for(int i=0;i<A;i++)
    {
        for(int j=0;j<B;j++)
        {
            if(i-1<0)
                a[i][j]+=0;
            else
                a[i][j]+=a[i-1][j];
            if(j-1<0)
                a[i][j]+=0;
            else
                a[i][j]+=a[i][j-1];
        }
    }
    return a[A-1][B-1];
}
