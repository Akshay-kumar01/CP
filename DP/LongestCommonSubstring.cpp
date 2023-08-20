#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2, int m, int n)
{
    if(m==0||n==0)
        return 0;
    
    if(s1[m-1]==s2[n-1])
        return 1 + lcs(s1,s2,m-1,n-1);
    
    else
        return max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1));
}

int main(){
    string a,b;
    cin>>a>>b;
    int m=a.length();
    int n=b.length();
    cout<<lcs(a,b,m,n);
}