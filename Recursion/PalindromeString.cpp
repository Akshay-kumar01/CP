#include<bits/stdc++.h>
using namespace std;

int fn(int l, int h, string word)
{
    if(l>h)
        return 1;
    if((word[l]==word[h])&&fn(l+1,h-1,word))
        return 1;
    else
        return 0;
}

int main()
{
    string w="";
    cin>>w;
    if(fn(0,w.size()-1,w))
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;
}