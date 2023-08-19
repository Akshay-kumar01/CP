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
    int ar[n]={0};
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            ar[c]=arr[i];
            c++;
        }
    }
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
    cout<<endl;
}