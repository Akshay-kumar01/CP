// https://codeforces.com/problemset/problem/1551/B1

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        map<char,int>m;
        for(int i=0;i<s.length();i++)
        {
            char ch=s.at(i);
            auto it=m.find(ch);
            if(it==m.end())
            m.insert(make_pair(ch,1));
            else
            it->second++;
        }
        int ans=0;
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second==1)
            continue;
            else
            ans++;
        }
        ans=ans+(m.size()-ans)/2;
        cout<<ans<<endl;
    }
}