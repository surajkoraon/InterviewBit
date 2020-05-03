void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int i,j=0;
    for(i=0;i<A.size();i++)
    {
        while(A[i]>=B[j])
        {
            A.insert(A.begin()+i,B[j]);
            j++;
            if(j>=B.size())
                break;
        }
        if(j>=B.size())
            break;
    }
    if(j<B.size())
    {
        while(j<B.size())
        {
            A.push_back(B[j]);
            j++;
        }
    }
}
