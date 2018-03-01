#define _CRT_SECURE_NO_WARNINGS

/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 1000010

using namespace std;

bool f[N];
vector<int> prime;

void sieve()
{
	memset(f, 0, sizeof(f));

	int i, j, k;
	int n = sqrt(N) + 1;

	f[0] = 1; f[1] = 1;
	prime.push_back(2);

	for (i = 3; i < n; i+=2)
	{
		if (!f[i])
		{
			for (j = i + i; j < N; j += i)
				f[j] = 1;
		}
	}

	for (i = 3; i < N; i += 2)
	{
		if (!f[i])
			prime.push_back(i);
	}

	for (i = 4; i < N; i += 2)
		f[i] = 1;
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, x, y;

	sieve(); m = prime.size();
	while (scanf("%d", &n))
	{
		if (!n)
			break;

		k = 0;
		for (i = 0; i < m; i++)
		{
			x = prime[i];
			y = n - x;
			
			if (x >= n)
				break;

			if (y < 2)
				break;

			if (!f[y])
			{
				k = 1;
				cout << n << ":\n";
				cout << x << "+" << y << endl;
				break;
			}
		}

		if (!k)
			cout << n << ":\nNO WAY!" << endl;
	}
	
	return 0;
}
