int Solution::maxPoints(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    if(n==0)
        return 0;
    map<float,int> m;
    float slope;
    map<float,int>::iterator it;
    int sol=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                continue;
            if(A[j]-A[i]==0)
                slope=-999999999;
            else
                slope=float(B[j]-B[i])/float(A[j]-A[i]);
            //cout<<slope<<" ";
            if(m.find(slope)==m.end())
                m[slope]=2;
            else
                m[slope]++;
        } 
        for(it=m.begin();it!=m.end();it++)
        {
           // cout<<it->first<<" ";
            sol=max(sol,it->second);
        }
       // cout<<endl;
        m.clear();
        
    }
    return sol;
}
