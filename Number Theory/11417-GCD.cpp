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
#include<sstream>
#include<string>
#include<time.h>
#include<unordered_map>
#include<unordered_set>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 700010
#define inf 10000000
#define pp pair<int,int>

using namespace std;

class numberTheory
{
public:
	numberTheory() {}
	int gcd(int a, int b)
	{
		int t;
		while (1)
		{
			if (b%a == 0)
				return a;

			t = b%a;
			b = a;
			a = t;
		}
	}
};

numberTheory nt;
int solve(int n)
{
	int i, j, k;
	int cnt = 0;

	for (i = 1; i < n; i++)
	{
		for (j = i + 1; j <= n; j++)
			cnt += nt.gcd(i, j);
	}

	return cnt;
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;

	while (1)
	{
		cin >> m;

		if (m)
			cout << solve(m) << endl;

		else
			break;
	}
	
	return 0;
}
