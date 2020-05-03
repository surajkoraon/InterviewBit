int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int row=A.size();
    int col=A[0].size();
    int i,j,start=0,t,end;
    vector<int> v;
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            v.push_back(A[i][j]);
    int mid;
    end=v.size()-1;
//    cout<<t<<endl;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(v[mid]==B)
        {
            return 1;
        }
        if(v[mid]<B)
        {
            start=mid+1;
        }
        if(v[mid]>B)
        {
            end=mid-1;
        }
    }
    return 0;
}
