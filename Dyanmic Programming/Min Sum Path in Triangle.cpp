int Solution::minimumTotal(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A.size()==0)
        return 0;
    int a[A.size()][A.size()];
    for(int i=0;i<A[A.size()-1].size();i++)
    {
        a[A.size()-1][i]=A[A.size()-1][i];
    }
    for(int i=A.size()-2;i>=0;i--)
    {
        for(int j=0;j<A[i].size();j++)
        {
            a[i][j]=min(a[i+1][j],a[i+1][j+1])+A[i][j];
        }
    }
    return a[0][0];
}
