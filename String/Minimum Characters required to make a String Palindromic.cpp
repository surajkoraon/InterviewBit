int Solution::solve(string A) {
    if(A.length()==0)
        return 0;
    int i,match=1;
    for(i=0;i<A.length();i++)
    {
        int start=0,end=i,pal=1;
        while(start<end)
        {
            if(A[start]!=A[end])
            {
                pal=0;
                break;
            }
            start++;
            end--;
        }
        if(pal)
        {
            match=i+1;
        }
    }
    return A.length()-match;
}
