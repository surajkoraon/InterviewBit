void Solution::rotate(vector<vector<int> > &A) {
    int i,j,n=A.size(),a,b,c,d;
    for(i=0;i<n/2;i++)
    {
        for(j=i;j<n-1-i;j++)
        {
            a=A[i][j];
            b=A[j][n-i-1];
            c=A[n-i-1][n-j-1];
            d=A[n-j-1][i];
            A[j][n-i-1]=a;
            A[n-i-1][n-j-1]=b;
            A[n-j-1][i]=c;
            A[i][j]=d;
        }
    }
}
