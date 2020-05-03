int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int i,j=0;
    vector<int>::iterator it;
    for(i=1;i<A.size();i++)
    {
        if(A[i]==A[j])
        {
            A.erase(A.begin()+i);
            i--;
        }
        else
            j++;
    }
    return A.size();
}
