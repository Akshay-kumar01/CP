#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,1,1,2,3,4};
    priority_queue<int>pq(a,a+6);
    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }
}