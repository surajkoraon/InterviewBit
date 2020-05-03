int Solution::longestSubsequenceLength(const vector<int> &arr) {
    int n=arr.size();
    int lis[n];
    int lds[n];
    lis[0]=1;    
    lds[0]=1;
    for (int i = 1; i < n; i++ )  
    { 
        lis[i] = 1; 
        for (int j = 0; j < i; j++ )   
            if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)  
                lis[i] = lis[j] + 1;  
    }    
    for (int i = 1; i < n; i++ )  
    { 
        lds[i] = 1; 
        for (int j = 0; j < i; j++ )   
            if ( arr[i] < arr[j] && lis[i] < lis[j] + 1)  
                lis[i] = lis[j] + 1;  
    } 
    int sol=-1;
    for(int i=0;i<n;i++)
    {
        sol=max(sol,lis[i]+lds[i]-1);
    }
    return sol;
}
