void com(int opening,vector<string> *v,int pos,char temp[],int n){
    if(n<0)
    {
        return;
    }
    if(n==0)
    {
        temp[pos]='\0';
        (*v).push_back(temp);
        return;
    }
    else
    {
        if(opening)
        {
            temp[pos]=')';
            com(opening -1 , v,pos+1,temp,n-1);
            if(opening < n)
            {
                temp[pos]='(';
                com(opening +1 , v,pos+1,temp,n);
            }
        }
        else
        {
            temp[pos]='(';
            com(opening +1 , v,pos+1,temp,n);
        }
    }
}

vector<string> Solution::generateParenthesis(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<string> v;
    char temp[2*A];
    com(0,&v,0,temp,A);
    for(auto i=v.begin();i!=v.end();i++)
        cout<<*i<<" ";
    //cout<<"\n";
    sort(v.begin(),v.end());
    return v;
    
}
