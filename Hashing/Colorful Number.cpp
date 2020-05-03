int Solution::colorful(int A) {
    string a=to_string( A);
int len=a.length();

unordered_map<long long, bool> Hash;

        for(int i = 0; i < len; i++) {
            long long mul = 1;
            for(int j = i; j < len; j++) {
                mul *= (long long)(a[j] - '0');
                if(Hash.find(mul) != Hash.end())   return 0;
                       
                Hash[mul] = true;
            }
        }

        return 1;

}
