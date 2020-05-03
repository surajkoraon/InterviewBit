int Solution::lengthOfLastWord(const string A) {
    string s;
    int x=-1,y=-1;
    for(int i=A.length()-1;i>=0;i--)
    {
        if(isalpha(A[i]))
        {
            x=i;
            break;
        }
    }
    for(int i=x;i>=0;i--)
    {
        if(A[i]==' ')
        {
            y=i;
            break;
        }
    }
    if(A.length()==0)
        return 0;
    if(y==-1 && x==-1)
        return 0;
    if(y==-1)
        return A.length();
    return x-y;
    
}
