vector<int> Solution::solve(int A, int B, int C, int D) {

    vector<int> v;
    v.push_back(A);
    v.push_back(B);
    v.push_back(C);
    sort(v.begin(),v.end());
    int x=v[0];
    vector<int> s;
    s.push_back(v[0]);
    int index=0;
    for(int i=1;i<D;i++)
    {
        if(s[i-1]*x<v[index%3])
        {
            s.push_back(s[i-1]*x);
            x=v[(index+1)%3];
        }
        else
        {
            s.push_back(v[i]);
        }
    }
    return s;
}
