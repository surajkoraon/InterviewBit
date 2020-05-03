queue<int> q;
string Solution::multiple(int A) {
    while(!q.empty()) {
        q.pop();
    }
    
    int mat[A];
    for(int i=0;i<A;i++) mat[i] = -1;

    mat[1%A] = -2;
    q.push(1%A);
    while(!q.empty()) {
        int curr = q.front(); q.pop();

        if(!curr) break;
        
        int x = (curr*10) % A;
        if(mat[x] == -1) {
            mat[x] = curr;
            q.push(x);
        }
        
        x = ((curr*10)+1) % A;
        if(mat[x] == -1) {
            mat[x] = curr;
            q.push(x);
        }
    }
    
    string result;
    int curr = 0;
    while(curr != -2) {
        int x = mat[curr];

        char ch = '1';
        if((x != -2) && ((x*10) % A) == curr) ch = '0';
        
        result += ch;
        curr = x;
    }
    reverse(result.begin(), result.end());
    
    return result;
}

