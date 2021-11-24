#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s, t;
	cin >> s >> t;
	int dp[s.length() + 1][t.length() + 1];
	for (int i = 0; i <= s.length(); i++)
	{
		for (int j = 0; j <= t.length(); j++)
		{
			dp[i][j] = 0;
		}
	}
	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 0; j < t.length(); j++)
		{
			if (s[i] == t[j])
			{
				dp[i + 1][j + 1] = dp[i][j] + 1;
			}
			else
			{
				dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
			}
		}
	}
	int i = s.length();
	int j = t.length();
	string res;
	while (i > 0 && j > 0)
	{
		if (dp[i][j] == dp[i - 1][j])
		{
			i -= 1;
		}
		else if (dp[i][j] == dp[i][j - 1])
		{
			j -= 1;
		}
		else
		{
			res = s[i - 1] + res;
			i -= 1;
			j -= 1;
		}
	}
	cout << res << endl;
}
