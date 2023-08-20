#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        arr[i]=num;
    }
    int a=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=a;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}