int Solution::nchoc(int A, vector<int> &B) {
    int x=0;
    for(int i=0;i<A;i++)
    {
        int max=-999999;
        int index=0;
        for(int j=0;j<B.size();j++)
        {
            if(B[j]>max)
            {
                index=j;
                max=B[j];
            }
        }
        x=x%1000000007+B[index]%1000000007;
        x=x%1000000007;
        B[index]/=2;
    }
    return x;
}
