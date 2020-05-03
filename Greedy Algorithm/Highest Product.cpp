void swap(int &a,int &b)
{
    int t=a;
    a=b;
    b=t;
}
int Solution::maxp3(vector<int> &A) {
    sort(A.begin(),A.end());
    int c=0;
    int n=1;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]<0)
        {
            n*=A[i];
            c++;
        }
        if(c==2)
            break;
    }
    int p=0;
    int prod=1;
    for(int i=A.size();i>=0;i--)
    {
        if(A[i]>0)
        {
            prod*=A[i];
            p++;
        }
        if(p==3)
            break;
    }
    if(c==2)
    {
        for(int i=A.size();i>=0;i--)
        {
            if(A[i]>0)
            {
                n*=A[i];
                break;
            }
        }    
    }
    if(c<2)
        return prod;
    return max(prod,n);
}
