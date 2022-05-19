#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif

	int n;
	cin >> n;
	vector<int> a;
	vector<int> b;
	a = {9, 9, 1};
	b = {1, 2, 1};
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	vector<int> res;
	for (int i = 0; i < n; i++)
	{
		int sum = a[i] + b[i];
		res.push_back(sum);
	}
	for (int i = 0; i < n; i++)
	{
		if (res[i] > 9 && i != n - 1)
		{
			res[i] %= 10;
			res[i + 1] += 1;
		}
		else if (res[i] > 9 && i == n - 1)
		{
			res[i] %= 10;
			res.push_back(1);
		}
	}
	reverse(res.begin(), res.end());
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << " ";
	}
	cout << endl;
	return 0;
}