#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="isHomeAliveThanYou";
    vector<string> v;
        string temp="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=65&&s[i]<=90)
            {
                v.push_back(temp);
                temp = "";
                temp+=s[i];
            }
            else
            {
                temp+=s[i];
            }
        }
        v.push_back(temp);
        for(auto it: v)
        {
            string st=it;
            for(int i=0;i<st.size();i++)
            {
                if (st[i] >= 97 && st[i] <= 120)
                    st[i] = st[i] - 32;
                else
                    st[i] += 32;
                cout << st[i];
            }
            cout << endl;
    }
}