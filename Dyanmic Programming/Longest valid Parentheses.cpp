int Solution::longestValidParentheses(string s) {
    int a[s.length()];
    for(int i=0;i<s.length();i++)
        a[i]=0;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]=='(')
            a[i]=0;
        else
        {      
            if(s[i-a[i-1]-1]=='(')
            {
                a[i]+=a[i-1]+2;
                if(a[i-a[i-1]-2]>=0)
                    a[i]+=a[i-a[i-1]-2];
            }
        }
    }
    sort(a,a+s.length());
    return a[s.length()-1];
}
