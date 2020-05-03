vector<int> temp;
void fun(vector<int> A,vector<vector<int> > &s,int index)
{
/*    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;*/
    s.push_back(temp);
/*    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<s[i].size();i++)
        {
            cout<<"-";
            cout<<s[i][j]<" ";
        }
        cout<<endl;
    }*/
    if(index==A.size())
    {
        return;
    }
    for(int i=index;i<A.size();i++)
    {
        temp.push_back(A[i]);
        fun(A,s,i+1);
        temp.pop_back();
    }
}
vector<vector<int> > Solution::subsets(vector<int> &A)
{
    vector<vector<int> > s;
    sort(A.begin(),A.end());
    fun(A,s,0);
    sort(s.begin(),s.end());
    return s;
}