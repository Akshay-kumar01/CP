#include<bits/stdc++.h>
using namespace std;

int fn(int n)
{
    if(n==0)
        return 0;
    return n%10 + fn(n/10);
}

int main()
{
    int n;
    cin>>n;
    cout<<fn(n)<<endl;
}