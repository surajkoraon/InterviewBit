int Solution::isPower(int A) {
    if(A==1)
        return 1;
    int i,j;
    for(i=2;i<=pow(A,0.5);i++)
    {
        for(j=2;pow(i,j)<=A;j++)
            if(pow(i,j)==A)
                return 1;
    }
    return 0;
}
