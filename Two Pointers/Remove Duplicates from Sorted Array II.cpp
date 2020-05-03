int Solution::removeDuplicates(vector<int> &A) {
    
    int i=1,j=1,flag=0;
    while (i<A.size() && j<A.size())
    {
        if (flag==1)
        {
            if (A[i-1]==A[j]) 
            {
                j++; 
                continue;
            }
            else flag = 0;
        }
        else 
        {
            if (A[i-1]==A[j]) 
            flag++;
            A[i] = A[j];
            i++;
            j++;
        }
    }
    A.erase(A.begin()+i, A.end());
    return A.size();

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
