    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        int n;
        cin>>n;
        int arr[]={5,10,50,25,20};
        int min=INT_MIN,ind=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>min)
            {
                ind=i;
                min=arr[i];
            }
        }
        cout<<ind<<" "<<arr[ind]<<endl;
    }