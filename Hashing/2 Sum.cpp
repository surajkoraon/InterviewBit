vector<int> Solution::twoSum(const vector<int> &A, int B) {
    vector<int> v;
    map<int,int> m;
    int index1,index2;
    for(int i=0;i<A.size();i++)
    {
        if(m.find(B-A[i])!=m.end())
        {
            index1=m[B-A[i]];
            index2=i;
            break;
        }
        else
            m.insert({A[i],i});
    }
    v.push_back(index1+1);
    v.push_back(index2+1);
    return v;
}
