#include<bits/stdc++.h>
using namespace std;

vector<int> prefix_function(string patt)
{
    int n=patt.size();
    vector<int> pi(n,0);
    for(int i=1;i<n;i++)
    {
        int j=pi[i-1];
        while(j>0&&patt[i]!=patt[j])
            j=pi[j-1];

        if(patt[i]==patt[j])
            j++;
        pi[i]=j;
    }
    return pi;
}

int main(){
    string patt="d";
    vector<int> pt=prefix_function(patt);
    for(int i=0;i<pt.size();i++)
        cout<<pt[i]<<" ";
    cout<<endl;
    string t="bcdaad";
    int pos=-1;
    int i=0,j=0;
    while(i<t.size())
    {
        if(t[i]==patt[j])
        {
            i++;
            j++;
        }
        else
        {
            if(j!=0)
                j=pt[j-1];
            else
                i++;
        }
        if(j==pt.size()){
            pos=i-pt.size();
            break;
        }
    }
    cout<<pos<<endl;
}