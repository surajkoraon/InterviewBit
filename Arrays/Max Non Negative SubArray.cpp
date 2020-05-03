vector<int> Solution::maxset(vector<int> &A) {
    long long int current=-1;
    long long int maxsofar=0;
    long long int lengthp=0;
    long long int lengthn=0;
    long long int start=-1,end=-1,startfinal=-1,i;
    for(i=0;i<A.size();i++)
    {
        if(A[i]>=0)
        {
            if(current+A[i]>=A[i])
            {
                current+=A[i];
            }
            else
            {
                current=A[i];
                start=i;
   //             cout<<start<<endl;
            }
            lengthn++;
            if(maxsofar<current)
            {
                maxsofar=current;
                end=i;
                startfinal=start;
            }
            else if(maxsofar==current)
            {
                if(lengthn>lengthp)
                {
                    maxsofar=current;
                    end=i;
                    startfinal=start;
                }
            }
        }
        else
        {
            current=-1;
            lengthp=lengthn;
            lengthn=0;
        }
 //       cout<<current<<endl;
    }
    vector<int> v;
 //   cout<<startfinal<<end<<endl;
    if(startfinal==-1 && end==-1)
        return v;
    for(i=startfinal;i<=end;i++)
    {
        v.push_back(A[i]);
    }
    return v;
}
