#include<bits/stdc++.h>
using namespace std;

int display(int ex, vector <int> &v,int s)
{
    int j=0,k=v.size()-1,flag=0;
    while(j<k)
    {
        if(j==ex&&j+1!=v.size())
        j++;
        else
        {
            flag=1;
            break;
        }
        if(k==ex&&k-1!=-1)
        k--;
        else
        {
            flag = 1;
            break;
        }
        if((v[j]+v[k])>s)
        k--;
        else if((v[j]+v[k])<s)
        j++;
        else if((v[j]+v[k])==s)
        {
            flag=0;
            cout<<v[ex]<<" "<<v[j]<<" "<<v[k]<<endl;
        }
    }
    if(j>=k||flag==1)
    return 0;
    else
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum;
        cin>>n>>sum;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            v.push_back(num);
        }
        sort(v.begin(),v.end());
        int i;
        for(i=0;i<n;i++)
        {
            if(display(i,v,sum-abs(v[i])))
            break;
        }
        if(i==n)
        cout<<"NO"<<endl;
    }
    return 0;
}