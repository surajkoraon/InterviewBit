void fun(vector<vector<int> > &s,vector<int> &v,int A,int B,int cur)
{
    if(v.size()==B)
    {
        s.push_back(v);
        v.erase(v.end()-1);
        return;
    }
    for(int i=cur;i<=A;i++)
    {
        v.push_back(i);
        fun(s,v,A,B,i+1);
    }
    if(!v.empty())
        v.erase(v.end()-1);
}
vector<vector<int> > Solution::combine(int A, int B) {
    vector<int> v;
    vector<vector<int> > s;
    fun(s,v,A,B,1);
    return s;
}
