int Solution::titleToNumber(string s) {
    int i,n=s.length(),x=0;
    for(i=0;i<n;i++)
    {
        x=x*26+1;
    }
    int temp=0;
    for(i=n-1;i>=0;i--)
    {
        int t;
        t=s[i]-'A';
        temp=temp+pow(26,n-1-i)*t;
    }
    return x+temp;
}
