string Solution::convert(string A, int B) {
    if(B==1)
        return A;
    vector<string> v(B);
    int a=0;
    int b=0;
    while(1)
    {
        while(a<B && b<A.size())
        {
            v[a]+=A[b];
            a++;
            b++;
        }
        a-=2;
        while(a>=0 && b<A.size())
        {
            v[a]+=A[b];
            a--;
            b++;
        }
        a+=2;
        if(b==A.size())
            break;
    }
    string s;
    for(int i=0;i<v.size();i++)
    {
        s=s+v[i];
    }
    return s;
}
