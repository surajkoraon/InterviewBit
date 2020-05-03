int Solution::bulbs(vector<int> &A) {
    int c=0;
    int x=0;
    int s[A.size()];
    for(int i=0;i<A.size();i++)
    {
        if(A[i]^x==0)
        {
            c++;
            x=x^1;
        }
    }
    return c;
}
