string Solution::longestPalindrome(string A) {
    
    vector < vector<bool> > Table (A.size(), vector<bool>(A.size()));
    string ans=A.substr(0,1);
    int ansLength = 1;
    
    for(int i=0;i<A.size();i++){
        Table[i][i]=true;
    }
    
    for(int i=0;i<A.size()-1;i++){
        if(A[i]==A[i+1]){
            Table[i][i+1]=true;
            ansLength=2;
            if(ans.length()!=2)
                ans = A.substr(i,2);
        }
    }
    
    for(int lenToCheck=3;lenToCheck <=A.size(); lenToCheck++){
        for(int i=0;i<A.size();i++){
            int j= i + lenToCheck - 1;
            if(j<A.size() && A[i]==A[j] && Table[i+1][j-1]==true){
                Table[i][j]=true;
                
                if(lenToCheck>ansLength){
                    ansLength = lenToCheck;
                    ans = A.substr(i,lenToCheck);
                }
            }
        }
    }
    
    return ans;
}