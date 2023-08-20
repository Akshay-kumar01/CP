#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            auto it=m.find(num);
            if(it==m.end())
            m.insert(make_pair(num,1));
            else
            it->second++;
        }
        int count=0;
        for (auto it = m.rbegin(); it != m.rend(); it++)
        {
            //cout<<it->first<<endl;
            if(it->first==1)
            break;
            while(it->second!=-1)
            {
                if (it->second==0)
                {
                    auto x = m.find(1);
                    if (x == m.end())
                        m.insert(make_pair(1, 1));
                    else
                        x->second++;
                    it->second=-1;
                    continue;
                }

                if(it->first%2)
                {
                    int h=it->first/2;
                    it->second--;
                    count++;
                    //cout<<it->second<<endl;
                    auto i=m.find(h);
                    if(i==m.end())
                        m.insert(make_pair(h,1));
                    else
                        i->second++;
                }
                else
                {
                    int h1=it->first/2;
                    int h2=it->first-h1;
                    it->second--;
                    count++;
                    auto i1 = m.find(h1);
                    auto i2 = m.find(h2);
                    if(i1==m.end())
                        m.insert(make_pair(h1, 1));
                    else
                        i1->second++;

                    if(i2==m.end())
                        m.insert(make_pair(h2, 1));
                    else
                        i2->second++;
                }
            }
        }
        if(count%2)
            cout << "errorgorn"<<endl;
        else
            cout << "maomao90" << endl;
    }
}