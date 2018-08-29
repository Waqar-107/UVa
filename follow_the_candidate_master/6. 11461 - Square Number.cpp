/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1010
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

set<int> num;

void solve()
{
    int n=sqrt(100000)+1;
    for(int i=1;i<=n;i++)
        num.insert(i*i);
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    solve();

    while(1)
    {
        sff(n,m);

        if(!n && !m) break;
        auto itr=num.lower_bound(n);
        k=0;
        while(itr!=num.end())
        {
            if(*itr>m) break;
            k++;
            itr++;
        }

        pf(k);
    }

    return 0;
}
