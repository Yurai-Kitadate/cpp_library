//https://atcoder.jp/contests/dp/tasks/dp_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N, K;
	cin >> N >> K;
	int h[N + 1];
	int dp[N + 1];
	for (int i = 0; i <= N; i++)
	{
		dp[i] = 1000000000;
	}
	dp[1] = 0;
	for (int i = 1; i <= N; i++)
	{
		cin >> h[i];
	}
	for (int i = 2; i <= N; i++)
	{
		for (int j = 1; j <= K && j < i; j++)
		{
			dp[i] = min(dp[i - j] + abs(h[i] - h[i - j]), dp[i]);
		}
	}
	cout << dp[N] << endl;
}
