int Solution::maxSubArray(const vector<int> &A) {
    int currentmax=-99999999;
    int maxsofar=-99999999;
    for(int i=0;i<A.size();i++)
    {
        currentmax=max(currentmax+A[i],A[i]);
        maxsofar=max(maxsofar,currentmax);
    }
    return maxsofar;
}
