#include<bits/stdc++.h>
using namespace std;

void fn(int n)
{
    if(n<1)
        return;
    cout<<n<<" ";
    fn(n-1);
}

void fn1(int n)
{
    if (n < 1)
        return;
    fn1(n - 1);
    cout << n << " ";
}

int main()
{
    int x;
    cin>>x;
    fn(x);
    fn1(x);
}