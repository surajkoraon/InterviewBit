string Solution::simplifyPath(string A) {
    string t;
    int b=1;
    stack<string> s;
    if(A[A.length()-1]!='/')
        A+='/';
    for(int i=0;i<A.length();i++)
    {
        if(A[i]=='/')
            b=b^1;
        else
            t+=A[i];
        if(b)
        {
            if(t==".");
            else if(t=="..")
            {
                if(!s.empty())
                    s.pop();
            }
            else
                s.push(t); 
            t="";
            b=0;
        }
    }
    string temp;
    string str;
    if(s.size()<1)
    {
        temp+='/';
        return temp;
    }
    stack<string> stk;
    while(!s.empty())
    {
        stk.push(s.top());
        s.pop();
    }
    while(!stk.empty())
    {
        //cout<<s.top()<<" ";
        str+='/';
        str+=stk.top();
        stk.pop();
    }
    //cout<<str<<" ";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='/' && str[i-1]=='/');
        else
            temp+=str[i];
    }
    return temp;
}
