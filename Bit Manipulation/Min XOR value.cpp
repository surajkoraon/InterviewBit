int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(),A.end());
    int minxor=INT_MAX;
    int n=A.size();
    int i;
    while(i<n-1)
    {
        int x=A[i]^A[i+1];
        minxor=min(minxor,x);
        i++;
    }
    return minxor;
}
