int Solution::diffPossible(const vector<int> &A, int B) {
    map<int, int> m;
    int n=A.size(),i;
    for(i=0;i<n;i++){
        if(m.find(A[i]-B)!=m.end() || m.find(A[i]+B)!=m.end()){
            return 1;
        }
        else
            m.insert({A[i],i});
    }
    return 0;
}