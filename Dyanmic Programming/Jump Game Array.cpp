int Solution::canJump(vector<int> &v) {
    if(v[0]==0 && v.size()>1)
        return 0;
    if(v[0]==0 && v.size()==1)
        return 1;
    vector<int> z;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==0)
            z.push_back(i);
    }
    for(int i=0;i<z.size();i++)
    {
        int c=1;
        for(int j=z[i]-1;j>=0;j--)
        {
            if(v[j]>c)
            {
                break;
            }
            c++;
            if(c==z[i]+1)
                return 0;
        }
    }
    return 1;
}
