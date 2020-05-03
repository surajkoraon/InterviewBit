vector<vector<int> > Solution::squareSum(int A) {
    vector<vector<int> > ans;
    for (int a = 0; a * a <= A; a++) {
        for (int b = 0; b * b <= A; b++) {
            if (a * a + b * b == A) 
            if(a<=b && a*b>0){
                vector<int> newEntry; 
                newEntry.push_back(a);
                newEntry.push_back(b);
                ans.push_back(newEntry);
            }
        }
    }
    return ans;
}
