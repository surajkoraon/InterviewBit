int Solution::reverse(int A) {
    int flag=0;
    if(A<0)
        flag=1;
    A=abs(A);
    long long int t=0;
    while(A!=0)
    {
        t=t*10+A%10;
        A=A/10;
    }
    if(abs(t)>pow(2,32)/2-1)
        return 0;
    if(flag)
        return (-1*t);
    return t;
}
