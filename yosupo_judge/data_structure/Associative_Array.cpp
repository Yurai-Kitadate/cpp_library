#include <bits/stdc++.h>
using namespace std;
int main()
{
	int Q;
	cin >> Q;
	map<long, long> T;
	long long zero = 0;
	for (int i = 0; i < Q; i++)
	{
		long long n, k, v;
		scanf("%lld", &n);
		if (n == zero)
		{
			scanf("%lld", &k);
			scanf("%lld", &v);
			T[k] = v;
		}
		else
		{
			scanf("%lld", &k);
			printf("%lld\n", T[k]);
		}
	}
}
