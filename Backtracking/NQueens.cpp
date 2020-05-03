bool issafe(int row,int col,int board[])
{
    int i;
    for(i=0;i<row;i++)
    {
        if(col==board[i])
        return false;
        if(abs(row-i)==abs(col-board[i]))
        return false;
    }
    return true;
}
vector<vector<int> > nqueen(vector<vector<int> > &sol,int row,int board[],int n)
{
    int i;
    int s=n;      
   // cout<<"-"<<s<<"-";
    for(i=0;i<s;i++)
    if(issafe(row,i,board))
    {
        board[row]=i;
        if(row==n-1)
        {
            vector<int> v(board,board+n);
            sol.push_back(v);
     //       cout<<v[v.size()-1];
        }
        else
        nqueen(sol,row+1,board,n);
    }
    return sol;
}
vector<vector<string> > Solution::solveNQueens(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int board[A];
    vector<vector<int> > sol;
    nqueen(sol,0,board,A);
    vector<vector<string> > s;
    vector<string> v;
    string str;
    //cout<<sol.size();
    for(int k=0;k<sol.size();k++)
    {
        for(int i=0;i<A;i++)
        {
            for(int j=0;j<A;j++)
            {
                if(sol[k][i]==j)
                    str+='Q';
                else
                    str+='.';
            }
            v.push_back(str);
            str="";
        }
        s.push_back(v);
        v.clear();
    }
    return s;
}
