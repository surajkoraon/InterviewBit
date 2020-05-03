vector<int> Solution::findSubstring(string A, const vector<string> &B) {
     int k = B[0].size();
    map<string,int>m;
    map<string,int>counti;
    map<string,int>counti2;
    m.clear();
    counti.clear();
    counti2.clear();
    vector<int>ans;
    while(ans.size())
    ans.pop_back();
    int siz = k*B.size();
    int Asiz = A.size();
    //cout<<Asiz<<" "<<siz;
    if(siz>Asiz)
    {
        return ans;
    }
    else
    {
    vector<int>val;
    val.clear();
    for(int i=0;i<A.size();i++)
    val.push_back(0);
    for(int i=0;i<B.size();i++)
    {
        if(m[B[i]]!=0)
        counti[B[i]]++;
        else
        {
        m[B[i]]=i+1;
        counti[B[i]]=1;
        }
        
        
    }
    
    
    for(int i=0;i<=A.size()-k;i++)
    {
        
        string  p = A.substr(i,k);
        
        if(m[p]!=0)
        {
            val[i]=m[p];
        
        }
        
    }
    
        for(int i=0;i<=Asiz-siz;i++)
        {
            
            int mere = 0;
            int p = i;
            for(int q=0;q<B.size();q++)
            {
                counti2[B[q]]= counti[B[q]];
            }
            
            while(mere<B.size())
            {
                //cout<<val[p];
                if(val[p]==0)
                break;
                if(counti2[B[val[p]-1]]==0)
                break;
                else
                counti2[B[val[p]-1]]--;
                p = p +k;
                mere++;
            }
            if(mere==B.size())
            ans.push_back(i);
            
            
        }
    
    return ans;
}

}
