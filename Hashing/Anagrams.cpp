vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    map<string,vector<int>> m;
    for(int i=0;i<A.size();i++)
    {
        string str=A[i];
        sort(str.begin(),str.end());
        m[str].push_back(i+1);
    }
    vector<vector<int> > v;
    for(auto it=m.begin();it!=m.end();it++)
    {
        v.push_back(it->second);
    }
    return v;
}
