vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    
    vector<int> v;
    sort(A.begin(),A.end(),greater<int>());
    sort(B.begin(),B.end(),greater<int>());
    int x=0,y=0;
    v.push_back(A[x]+B[y]);
    for(int i=1;i<A.size();i++)
    {
        if(A[x+1]+B[y]==A[x]+B[y+1])
        {
            v.push_back(A[x+1]+B[y]);
            v.push_back(A[x+1]+B[y]);
            x++;
            y++;
            i++;
        }
        else if(A[x+1]+B[y]>A[x]+B[y+1])
        {
            v.push_back(A[x+1]+B[y]);
            x++;
        }
        else
        {
            v.push_back(A[x]+B[y+1]);
            y++;
        }
    }
    return v;
}