vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    int i,j=0;
    vector<int> v;
    for(i=0;i<A.size();i++)
    {
        for(;j<B.size();j++)
        {
            if(A[i]==B[j])
            {
                v.push_back(A[i]);
                j++;
                break;
            }
            if(A[i]<B[j])
            {
                break;
            }
        }
    }
    return v;
}
