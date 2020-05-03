int Solution::solve(string A) {
    int size=A.length();
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(tolower(A[i])=='a' || tolower(A[i])=='e' || tolower(A[i])=='i' || tolower(A[i])=='o' || tolower(A[i])=='u')
        {
            count+=size-i;    //to count number of substrings that starts with A[i]
        }
        count=count%10003;
    }
    return count;
}
