//https://atcoder.jp/contests/dp/tasks/dp_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int h[N + 1];
	int dp[N + 1];
	for (int i = 0; i <= N; i++)
	{
		dp[i] = 0;
	}
	for (int i = 1; i <= N; i++)
	{
		cin >> h[i];
	}
	for (int i = 2; i <= N; i++)
	{
		if (i > 2)
		{
			dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
		}
		else
		{
			dp[i] = dp[i - 1] + abs(h[i] - h[i - 1]);
		}
	}
	cout << dp[N] << endl;
}
