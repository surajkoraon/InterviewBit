void solve(vector<int> A,int B,int index,int sum,vector<vector<int> > &soln,vector<int> v)
{
    for(int i=index;i<A.size();i++)
    {
        sum+=A[i];
        v.push_back(A[i]);
        if(sum<B)
        {
            solve(A,B,i,sum,soln,v);
            sum-=A[i];
            v.pop_back();
        }
        if(sum>B)
            return;
        if(sum==B)
        {
            soln.push_back(v);
            v.pop_back();
            sum-=A[i];
        }
    }
}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    vector<vector<int> > soln;
    vector<int> v;
    map<int,int> m;                 //using map to remove duplicate elements from vector A
    for(int i=0;i<A.size();i++)     //and copy those elemens in vector a 
    {
        m[A[i]]=i;
    }
    vector<int> a;
    for(auto it=m.begin();it!=m.end();it++)
    {
        a.push_back(it->first);
    }
    sort(a.begin(),a.end());        //sorting elements of vector a in non-decreasing order
    solve(a,B,0,0,soln,v);
    return soln;
}
