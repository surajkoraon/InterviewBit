vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int> v;
    v.push_back(-1);
    stack<int> s;
    s.push(A[0]);
    int i;
    for(i=1;i<A.size();i++)
    {
        if(A[i-1]<A[i])
            v.push_back(A[i-1]);
        else if(s.top()<A[i])
            v.push_back(s.top());
        else
            v.push_back(-1);
        if(s.top()>A[i])
            s.push(A[i]);
    }
    return v;
}
