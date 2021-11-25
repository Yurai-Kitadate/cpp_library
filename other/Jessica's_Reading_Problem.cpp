#include <iostream>
#include <set>
#include <map>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	set<int> content;
	map<int, int> cnt;
	for (int i = 0; i < n; i++)
	{
		content.insert(a[i]);
	}
	int tag = content.size();
	int head = 0;
	int tail = 0;
	cnt[a[0]] = 1;
	int res = 1000000000;
	int num = 1;
	while (head < n && tail < n)
	{
		if (num < tag)
		{
			head += 1;
			if (cnt[a[head]]++ == 0)
			{
				num += 1;
			}
		}
		else
		{
			res = min(head - tail + 1, res);
			tail += 1;
			if (--cnt[a[tail - 1]] == 0)
			{
				num -= 1;
			}
		}
	}
	cout << res << endl;
}
