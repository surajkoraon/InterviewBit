string Solution::longestCommonPrefix(vector<string> &A) {
    int i,j=0,common,flag=0;
    while(1)
    {
        for(i=0;i<A.size()-1;i++)
        {
            if(A[i+1][j]!=A[i][j])
            {
                common=j-1;
                flag=1;
            }
        }
        j++;
        if(flag)
            break;
    }
    string s;
    for(int i=0;i<=common;i++)
    {
        s+=A[0][i];
    }
    return s;
}
