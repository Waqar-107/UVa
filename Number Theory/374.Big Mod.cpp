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
	
	ll bigMod(ll a, ll p, ll m)
	{
		if (!p)
			return 1;

		if (p & 1)
			return ((a%m)*bigMod(a, p - 1, m)) % m;

		ll temp = bigMod(a, p / 2, m);
		return (temp*temp) % m;
	}
};

int main()
{
	freopen("in2.txt", "r", stdin);

	ll i, j, k;
	ll n, m;
	ll a, p;

	numberTheory nt;

	while (cin >> a >> p >> m)
	{
		cout << nt.bigMod(a, p, m) << endl;
	}
	
	return 0;
}
