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
#define N 120
#define inf 10000000
#define pp pair<int,int>

using namespace std;

class numberTheory
{
public:
	numberTheory() {}
	ll gcd(ll a, ll b)
	{
		ll t;
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

ll a[N];

int main()
{
	//freopen("in2.txt", "r", stdin);

	ll i, j, k;
	ll n, m;
	ll x, y, c;

	numberTheory nt;

	cin >> n; c = 1;
	while (n--)
	{
		cin >> m;
		printf("Case %d: ", c); c++;

		x = 1;
		for (i = 0; i < m; i++)
			cin >> a[i], x *= a[i];

		y = x;
		x = 0;

		for (i = 0; i < m; i++)
			x += (y / a[i]);

		y *= m;
		k = nt.gcd(x, y);

		y /= k;
		x /= k;


		cout << y << "/" << x << endl;
	}
	
	return 0;
}
