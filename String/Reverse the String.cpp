void Solution::reverseWords(string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    A+=' ';
    vector<string> v;
    string s;
    for(int i=0;i<A.length();i++)
    {
        if(isalpha(A[i]))
            s+=A[i];
        else if(i!=0)
        if(A[i]==' ' && isalpha(A[i-1]))
        {
//            cout<<s<<endl;
            v.push_back(s);
            s="";
        }
    }
    A="";
    for(int i=v.size()-1;i>=0;i--)
    {
        A+=v[i];
        if(i>0)
            A+=' ';
    }
}
