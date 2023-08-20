#include<bits/stdc++.h>
using namespace std;

int steps(int i, int n)
{
    if(i==n)
        return 1;

    return (steps(i+1,n)+steps(i+2,n))%10000000007;
}

int main()
{
    int n;
    cin>>n;
    cout<<steps(0,n);
    return 0;
}