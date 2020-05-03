vector<string> Solution::fizzBuzz(int A) {
    vector<string> v;
    for(int i=1;i<=A;i++)
    {
        string s;
        if(i%3==0)
            s+="Fizz";
        if(i%5==0)
            s+="Buzz";
        if(i%3 && i%5)
            s+=to_string(i);
        v.push_back(s);
    }
    return v;
}
