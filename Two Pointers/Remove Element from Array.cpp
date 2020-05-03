int Solution::removeElement(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<int>::iterator it;
    it=A.begin();
    int flag=0;
    if(A[A.size()-1]==B)
        flag=1;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]!=B)
        {
            *it=A[i];
            it++;
        }       
    }
    if(flag)
        A.erase(it+1,A.end());
    else
        A.erase(it,A.end());
    return it-A.begin()+1;
}
