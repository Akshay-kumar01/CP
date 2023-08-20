#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0||n==1)
        return n;
    return fact(n-1)+fact(n-2);
}

int main()
{
    cout<<"Enter a number"<<endl;
    int num;
    cin>>num;
    cout<<fact(num)<<endl;
}