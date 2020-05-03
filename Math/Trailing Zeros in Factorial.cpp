int Solution::trailingZeroes(int n) {
    int i=5;
    int c=0;
    while(n/i)
    {
        c+=n/i;
        i*=5;
    }
    return c;
}
