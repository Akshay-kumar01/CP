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
    int mid=n/2;
    for(int i=0;i<arr[mid];i++)
    {
        swap(arr[i],arr[n-1-i]);
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}