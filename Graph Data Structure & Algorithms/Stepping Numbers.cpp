vector<int> Solution::stepnum(int A, int B) {
     int arr[]={0,1,2,3,4,5,6,7,8,9};
    vector<int> result;
    queue<int> Q;
    for(int i=1;i<=9;i++)
    {
        Q.push(i);
    }
    if(A==0)
    result.push_back(A);
    while(!Q.empty())
    {
        int x=Q.front();
       // cout<<"x="<<x<<endl;
        Q.pop();
        if(x>=A&&x<=B)
        {
            result.push_back(x);
        }
            int v,u=x%10;
            x*=10;
            //cout<<"u="<<u<<endl;
            if(u!=0)
            {
                v=x+arr[u-1];
            //    cout<<"first="<<v<<endl;
                if(v<=B)
                Q.push(v);
            }
            if(u!=9)
            {
                v=x+arr[u+1];
               // cout<<"second="<<v<<endl;
                if(v<=B)
                Q.push(v);
            }
        
    }
    return result;
}