int Solution::isPalindrome(int A) {
    if(A<0)
        return 0;
    int temp=A,t=0;
    while(A!=0)
    {
        t=t*10+A%10;
        A=A/10;
    }
    if(t==temp)
        return 1;
    return 0;
}
