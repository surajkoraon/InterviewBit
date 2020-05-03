string Solution::countAndSay(int n) {
    string s="1",t;
    if(n==1)
    {
        return s;
    }
    int i,k,a,j=0;
    char b;
    for(i=1;i<n;i++)
    {
//        cout<<s<<endl;
        int c=1;
        for(k=0;k<s.length();k++)
        {
            b=s[k];
            if(k!=s.length()-1 && s[k]==s[k+1])
                c++;    
            else
            {
                a=c;
                c=1;
                t+='0'+a;
                t+=b;
            }
        }
        s=t;
        t="";
    }
    return s;
}
