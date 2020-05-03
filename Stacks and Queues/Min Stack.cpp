vector<int> v,u;
int mins=INT_MAX;
MinStack::MinStack() {
    
}

void MinStack::push(int x) {
    if(v.size()==0)
        mins=INT_MAX;
    v.push_back(x);
    mins=min(x,mins);
    u.push_back(mins);
}

void MinStack::pop() {
    if(v.size()>0)
    {
        v.pop_back();
        u.pop_back();
    }
    if(u.size()>0)
        mins=u[u.size()-1];
    else
        mins=-1;
}

int MinStack::top() {
    if(v.size()>0)
        return v[v.size()-1];
    return -1;
}

int MinStack::getMin() {
    if(v.size()>0)
        return mins;
    else
        return -1;
}

