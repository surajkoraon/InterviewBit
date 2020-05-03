int Solution::singleNumber(const vector<int> &A) {
    int first = 0;
    int second = 0;
    for(auto n:A){
        first = (first ^ n) & ~second;
        second = (second ^ n) & ~first;
        cout<<first<<" "<<second<<endl;
    }
    return first;
}
