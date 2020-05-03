void fun(vector<int> &A,vector<int> &v,vector<vector<int> > &sol)
{
    
    if(v.size()==A.size())
    {
        sol.push_back(v);
        vector<int>::iterator it;
        it=v.end();
        it--;
        v.erase(it);
        return;
    }
    for(int i=0;i<A.size();i++)
    {
        if(find(v.begin(),v.end(),A[i])==v.end())
        {
            v.push_back(A[i]);
            fun(A,v,sol);
        }
        else
            continue;
    }
    vector<int>:: iterator it;
    it=v.end();
    it--;
    v.erase(it);
}
vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<int> v;
    vector<vector<int> > sol;
    fun(A,v,sol);
    return sol;
}

