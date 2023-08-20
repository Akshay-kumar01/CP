#include<bits/stdc++.h>
using namespace std;


//top down approach
int fib(int n,vector<int> &dp)
{
    if(n<=1)
        return n;
    if(dp[n]!=-1)
        return dp[n];
    
    dp[n]=fib(n-1, dp) + fib(n-2, dp);
    return dp[n];
}


//normal
int fibn(int n)
{
    if (n <= 1)
        return n;

    return fibn(n-1)+fibn(n-2);
}

int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1);
    for(int i=0;i<n+1;i++)
        dp[i]=-1;
    cout<<fib(n,dp)<<" "<<fibn(n);
    return 0;
}