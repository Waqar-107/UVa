#define _CRT_SECURE_NO_WARNINGS

/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<list>
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

#define dbg printf("in\n")
#define nl printf("\n");
#define N 100000
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<ll,int>

using namespace std;

struct trieNode
{
	bool end;
	trieNode *next[10];

	trieNode() {
		end = false;
		for (int i = 0; i < 10; i++)
			next[i] = NULL;
	}
};

bool ans;
class trie
{
	trieNode *root;

	//recursively frees memory
	void fr(trieNode *curr)
	{
		for (int i = 0; i<10; i++)
		{
			if (curr->next[i])
				fr(curr->next[i]);
		}

		delete(curr);
	}

public:
	trie() {
		root = new trieNode();
	}

	void insertWord(string s)
	{
		trieNode *curr = root;

		int n = s.length();
		for (int i = 0; i < n; i++)
		{
			if (curr->next[s[i] - '0'] == NULL)
				curr->next[s[i] - '0'] = new trieNode();

			curr = curr->next[s[i] - '0'];

			if (curr->end) ans = false;
		}

		curr->end = true;
		for (int i = 0; i < 10; i++)
		{
			if (curr->next[i] != NULL)
				ans = false;
		}
	}

	void freeMem() {
		fr(root);
	}
};

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, t;
	string s;
	
	sf(t);
	while (t--)
	{
		sf(n);
		trie tr;

		ans = true;
		while (n--)
		{
			cin >> s;

			if (ans)
				tr.insertWord(s);
		}

		if (!ans)
			pfs("NO\n");
		else
			pfs("YES\n");

		tr.freeMem();
	}

	return 0;
}
