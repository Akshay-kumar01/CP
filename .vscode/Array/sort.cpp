#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int f, j, i = 0;
        while(!is_sorted(a, a+n))
        {
            f = 0;
            if (i % 2)
                j = 1;
            else
                j = 0;
            for (j; j < n; j = j + 2)
            {
                if (j + 1 >= n)
                    continue;
                if (a[j] > a[j + 1])
                {
                    f = 1;
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
            i++;
        }
        cout<<i<<endl;
    }
}