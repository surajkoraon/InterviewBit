int Solution::majorityElement(const vector<int> &A) {
    for(int i=0; i<A.size(); i++){
        int cnt = 0;
        for(int j=0; j<A.size(); j++){
            if(A[i] == A[j])
                cnt++;
            else
                cnt--;
        }
        if(cnt>0)
            return A[i];
    }
}
