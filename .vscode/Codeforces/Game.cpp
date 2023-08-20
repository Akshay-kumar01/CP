// // question link - https://codeforces.com/problemset/problem/1649/A

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v;
//         for (int i = 0; i < n; i++)
//         {
//             int num;
//             cin >> num;
//             v.push_back(num);
//         }
//         int j = 0, k = 1, sum = 0;
//         while (k < n)
//         {
//             if (v[j] == v[k])
//             {
//                 if ((k - j) != 1)
//                 {
//                     sum = sum + (k - j);
//                     j = k;
//                     k = k + 1;
//                 }
//                 else
//                 {
//                     j++;
//                     k++;
//                 }
//             }
//             else
//             {
//                 k++;
//             }
//         }
//         cout << sum << endl;
//     }
// }