int Solution::climbStairs(int A) {
    int a[A];
    a[0]=1;
    a[1]=1;
    for(int i=2;i<A;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    return a[A-1];
}
