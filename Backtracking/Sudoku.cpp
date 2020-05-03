bool issafe(vector<vector<char> > &A,int row,int col,int k)
{
    char num='0'+k;
    for(int i=0;i<A.size();i++)
    {
        if(A[i][col]==num)
            return false;
        if(A[row][i]==num)
            return false;
    }
    int x,y;
    if(row>=0&&row<3) x=0;
    else if(row>=3&&row<6) x=3;
    else x=6;
    
    if(col>=0&&col<3) y=0;
    else if(col>=3&&col<6) y=3;
    else y=6;
    
    int nx=x+3,ny=y+3;
    while(x<nx)
    {
        int tempj=y;
        while(tempj<ny)
        {
            if(A[x][tempj]==num) return false;
            tempj++;
        }
        x++;
    }
    return true;
}
bool sudoku(vector<vector<char> > &mat)
{
    int i,j;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(mat[i][j]=='.')
            {
                int num;
                for(num=1;num<=9;num++)
                {
                    if(issafe(mat,num,i,j)==true)
                    {
                        mat[i][j]='0'+num;
                        if(sudoku(mat)==true)
                        return true;
                        mat[i][j]='.';
                    }
                }
                return false; //no number can be used there
            }
        }
    }
    return true;
}
void Solution::solveSudoku(vector<vector<char> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

   sudoku(A);
}
