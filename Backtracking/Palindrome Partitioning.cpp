bool ispallindrome(string s)
{
    for(int i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[s.size()-i-1])
            return false;
    }
    return true;
}
void sol(string A,vector<string> v,vector<vector<string> > &vec)
{
    if(A.empty())
    {
        vec.push_back(v);
        return;
    }
    for(int i=0;i<A.size();i++)
    {
        string str=A.substr(0,i+1);
        if(ispallindrome(str))
        {
            v.push_back(str);
            sol(A.substr(i+1),v,vec);
            v.pop_back();
        }
    }
}

vector<vector<string> > Solution::partition(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<string> > vec;
    vector<string> v;
    sol(A,v,vec);
    return vec;
}
