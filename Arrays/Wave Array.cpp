vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
    int i,s[A.size()];
    for(i=0;i<A.size();i+=2)
    {
        s[i]=A[i+1];
        s[i+1]=A[i];
    }
    if(A.size()%2==1)
        s[A.size()-1]=A[A.size()-1];
    
    for(i=0;i<A.size();i++)
        A[i]=s[i];
    return A;
}
