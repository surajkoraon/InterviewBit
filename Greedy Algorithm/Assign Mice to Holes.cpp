int Solution::mice(vector<int> &A, vector<int> &B) {
    sort(A.rbegin(),A.rend());
   sort(B.rbegin(),B.rend());
   
   int maxi=-1;
   for(int i=0;i<A.size();i++)
   {
       maxi=max(maxi,abs(B[i]-A[i]));
   }
   return maxi;
}
