#include<bits/stdc++.h>
using namespace std;

void findf(int ind, vector<char> &ds, string st, int n, vector<string> &ans)
{
    if(ind==n)
    {
        string s="";
        for(auto it:ds)
        {
            cout<<it<<" ";
            s=s+it;
        }
        ans.push_back(s);
    if(ds.size()==0)
        cout<<"{}";
    cout<<endl;
    return;
    }
    findf(ind+1,ds,st,n, ans);
    ds.push_back(st[ind]);
    findf(ind+1, ds, st, n, ans);
    ds.pop_back();
}

int main()
{
    string st="AKS";
    int n=st.size();
    vector<char> ds;
    vector<string> ans;
    findf(0, ds, st, n, ans);
    for(auto it: ans)
        cout<<it<<endl;
    return 0;
}