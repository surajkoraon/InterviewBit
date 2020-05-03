vector<int> Solution::dNums(vector<int> &A, int B) {
    vector<int> v;
    map<int,int> m;
    for(int i=0;i<B;i++)
    {
        if(m.find(A[i])==m.end())
        {
            m.insert({A[i],1});
        }
        else
            m[A[i]]++;
    }
    v.push_back(m.size());
    //cout<<m.size()<<" ";
    for(int i=B;i<A.size();i++)
    {
        map<int,int>::iterator it;
        if(m.find(A[i])==m.end())
        {
            m.insert({A[i],1});
        }
        else
        {
            m[A[i]]++;
        }
        if(m[A[i-B]]>1)
        {
            m[A[i-B]]--;
        }
        else
        {
            it=m.find(A[i-B]);
            m.erase(it);
        }
        v.push_back(m.size());
        //cout<<m.size()<<" ";
    }
    return v;
}
