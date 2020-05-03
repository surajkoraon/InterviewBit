int Solution::numDecodings(string A) {
    if(A.length()==0)
        return 0;
    if(A[0]=='0')
        return 0;
    // if(A.length()>2 && A[A.length()-1]=='0')
    //     return 0;
    // if(A[0]>'2' && A[A.length()-1]=='0')
    //     return 0;
     int table[A.length()];
     table[0]=1;
     int single=1;
     int prev=A[0]-'0';
     for(int i=1;i<A.length();i++)
     {
         int curr=A[i]-'0';
         table[i]=table[i-1];
         if(prev<2)
         {
             table[i]+=single;
         }
         else if(prev<3 && curr<7)
         {
             table[i]+=single;
         }
         single=table[i-1];
         prev=curr;
         
         if(A[i]=='0')
         {
            table[i]-=table[i-1];
            single=0;
         }
     }
     return table[A.length()-1];
}
