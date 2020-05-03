int con(string s)
{
    int sum=0;
    for(int i=s.length()-1;i>=0;i--)
    {
        int x=s.length()-i-1;
        if(s[i]=='1')
            sum+=1<<x;
    }
    return sum;
}
void generateGrayarr(int n,vector<string> &arr)
{
    if (n <= 0)
        return;
    arr.push_back("0");
    arr.push_back("1");
    int i, j;
    for (i = 2; i < (1<<n); i = i<<1)
    {
        for (j = i-1 ; j >= 0 ; j--)
            arr.push_back(arr[j]);
 
        for (j = 0 ; j < i ; j++)
            arr[j] = "0" + arr[j];

        for (j = i ; j < 2*i ; j++)
            arr[j] = "1" + arr[j];
    }
}
vector<int> Solution::grayCode(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<string> arr;
    vector<int> v;
    generateGrayarr(A,arr);
    for(int i=0;i<arr.size();i++)
    {
        v.push_back(con(arr[i]));
    }
    return v;
}
