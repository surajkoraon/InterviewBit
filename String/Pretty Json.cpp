vector<string> Solution::prettyJSON(string A) {
    vector<string> v;
    /*v.push_back("{");
    v.push_back("\tA");
    v.push_back("\tB");
    v.push_back("\tC");
    v.push_back("\tD");
    v.push_back("\tE");
    v.push_back("}");
    //cout<<A;*/
    string temp;
    string s;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]=='[' || A[i]=='{')
        {
            if(s.size()>0)
                v.push_back(temp+s);
            v.push_back(temp+A[i]);
            temp+="\t";
            s="";
        }
        else if(A[i]==']' || A[i]=='}')
        {
            if(s.size()>0)
                v.push_back(temp+s);
            temp.erase(temp.end()-1);
            if(i<A.size()-1 && A[i+1]==',')
            {
                v.push_back(temp+A[i]+A[i+1]);
                i++;
            }
            else
                v.push_back(temp+A[i]);
            s="";
        }
        else if(A[i]==',')
        {
            s+=A[i];
            v.push_back(temp+s);
            s="";
        }
        else
        {
            s+=A[i];
        }
        //cout<<s<<endl;
    }
    return v;
}
