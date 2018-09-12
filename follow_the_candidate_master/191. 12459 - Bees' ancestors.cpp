/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 100
#define inf 10000000000000000

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
#define pp pair<ll,ll>

using namespace std;

ll d[N], f[N];

int main()
{
    freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;

    memset(d,0,sizeof(d));
    memset(f,0,sizeof(f));

    d[0]=1; f[1]=1;
    for(i=2;i<N;i++)
    {
        //d[i-1] has a mother, f[i-1] has a mother
        f[i]=d[i-1]+f[i-1];
        d[i]=f[i-1];
    }

    while(cin>>n)
    {
        if(!n) break;
        cout<<f[n]+d[n]<<endl;
    }

    return 0;
}
