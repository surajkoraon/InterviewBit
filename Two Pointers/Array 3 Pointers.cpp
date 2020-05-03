int bs(const vector<int> &A,int n)
{
    int min=99999999;
    int start=0;
    int end=A.size()-1;
    int mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(A[mid]==n)
            return A[mid];
        if(A[mid]<n)
            start=mid+1;
        if(A[mid]>n)
            end=mid-1;
    }
    int sol;
    if(A[mid]<n)
        if((abs(A[end]-n)<abs(A[end+1]-n)))
            sol=abs(A[end]-n);
        else
            sol=abs(A[end+1]-n);
    else
        if((abs(A[start]-n)<abs(A[start-1]-n)))
            sol=abs(A[start]-n);
        else
            sol=abs(A[start-1]-n);
    return sol;
}
int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {

    int i,maxi,mini1,mini2,mini3;
    for(i=0;i<A.size();i++)
    {
        mini1=99999999,maxi=-99999999;
        int a=A[i];
        int b=bs(B,a);
        int c=bs(C,a);
        maxi=max(max(abs(a-b),abs(b-c)),abs(c-a));
        mini1=min(maxi,mini1);
    }
    for(i=0;i<B.size();i++)
    {
        mini2=99999999,maxi=-99999999;
        int a=B[i];
        int b=bs(C,a);
        int c=bs(A,a);
        maxi=max(max(abs(a-b),abs(b-c)),abs(c-a));
        mini2=min(maxi,mini2);
    }
    for(i=0;i<C.size();i++)
    {
        mini3=99999999,maxi=-99999999;
        int a=C[i];
        int b=bs(A,a);
        int c=bs(B,a);
        maxi=max(max(abs(a-b),abs(b-c)),abs(c-a));
        mini3=min(maxi,mini3);
    }
    int mini=min(min(mini1,mini2),mini3);
    return mini;
}
