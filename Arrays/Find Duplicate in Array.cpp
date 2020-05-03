int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int a[A.size()];
    for(int i=0;i<A.size();i++)
    {
        a[i]=A[i];
    }
    for(int i=0;i<A.size();i++)
    {
        if(a[abs(a[i])]<0)
            return abs(a[i]);
        else
        {
            a[abs(a[i])]*=-1;
        }
    }
    return -1;
}
