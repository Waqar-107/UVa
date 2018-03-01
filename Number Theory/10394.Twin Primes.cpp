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
#define N 20000010
#define pp pair<int,int>

using namespace std;

bool f[N];
vector<int> prime;
vector<pp> ans;

void sieve()
{
	memset(f, 0, sizeof(f));

	int i, j, k;
	int n = sqrt(N) + 1;

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

	n = prime.size();
	for (i = 0; i < n-1; i++)
	{
		if (prime[i] + 2 == prime[i + 1])
			ans.push_back({ prime[i],prime[i + 1] });
	}
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, f;

	sieve();
	
	while (scanf("%d", &n) != EOF)
		printf("(%d, %d)\n", ans[n - 1].first, ans[n - 1].second);

	return 0;
}
