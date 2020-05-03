void solve(vector<int> A,int B,int index,int sum,vector<vector<int> > &soln,vector<int> v)
{
    for(int i=index;i<A.size();i++)
    {
        sum+=A[i];
        v.push_back(A[i]);
        if(sum<B)
        {
            solve(A,B,i+1,sum,soln,v);
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
    sort(A.begin(),A.end());        
    solve(A,B,0,0,soln,v);
    vector<vector<int> > ans;
    set <vector<int> > s;
    for(int i=0;i<soln.size();i++)
    {
        s.insert(soln[i]);
    }
    for(auto itr=s.begin();itr!=s.end();itr++)
    {
        ans.push_back(*itr);
    }
    return ans;
}
