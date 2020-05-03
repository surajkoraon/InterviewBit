int Solution::isPalindrome(string A) {
    string s;
    for(int i=0;i<A.length();i++)
    {
        if(isdigit(A[i]) || isalpha(A[i]))
            s+=tolower(A[i]);
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=s[s.length()-1-i])
            return 0;
    }
    return 1;
}