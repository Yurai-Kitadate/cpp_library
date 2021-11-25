//http://poj.org/problem?id=3061
#include <iostream>
using namespace std;
int main()
{
	long long N;
	cin >> N;
	for (long long i = 0; i < N; i++)
	{
		long long n, k;
		cin >> n >> k;
		long long A[n];
		for (long long j = 0; j < n; j++)
		{
			cin >> A[j];
		}
		long long head = 0;
		long long tail = 0;
		long long total = A[0];
		long long res = 1000000000;
		while (head < n)
		{
			if (total >= k)
			{
				res = min(head - tail + 1, res);
				total -= A[tail];
				tail += 1;
				continue;
			}
			else
			{
				head += 1;
				total += A[head];
				continue;
			}
		}
		if (res == 1000000000)
		{
			res = 0;
		}
		cout << res << endl;
	}
}
