int Solution::numSetBits(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int c=1;
    if(A==0)
        return 0;
    while(1)
    {
        A=A&(A-1);
        if(A!=0)
            c++;
        else
            return c;
    }
}
