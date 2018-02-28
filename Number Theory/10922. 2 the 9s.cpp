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
#define N 100005
#define inf 100000000
#define pp pair<int,int>

using namespace std;

int cnt(string s)
{
	int sum = 0, len=s.length();
	for (int i = 0; i < len; i++)
		sum += (s[i] - 48);

	return sum;
}

int cnt2(int n)
{
	int sum = 0;
	while (n)
	{
		sum += (n % 10);
		n /= 10;
	}

	return sum;
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, f;
	string s;

	while (true)
	{
		cin >> s;

		if (s[0] == '0')
			break;

		f = 1; k = 0;
		m = cnt(s);
		while (m/10)
		{
			if (m % 9 != 0)
			{
				f = 0;
				break;
			}

			k++;
			m = cnt2(m);
		}

		if (!f)
			cout << s << " is not a multiple of 9." << endl;
		else
			cout << s <<" is a multiple of 9 and has 9-degree " << k +1<<"."<< endl;
	}

	return 0;
}
