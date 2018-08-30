/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 110
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d\n",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

vector<string> ans[N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    string s;

    sf(n);
    for(i=1;i<=n;i++)
    {
        printf("Case #%d:\n",i);

        for(j=0;j<N;j++)
            ans[j].clear();

        m=0;
        for(j=0;j<10;j++)
        {
            cin>>s;
            sf(k);

            ans[k].pb(s);
            m=max(m,k);
        }

        for(string str : ans[m])
            cout<<str<<endl;
    }

    return 0;
}
