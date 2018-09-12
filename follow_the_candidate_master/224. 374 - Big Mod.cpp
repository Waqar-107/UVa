/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 150
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

//a^p%m
ll bigMod(ll a,ll p,ll m)
{
    if(p==0)
        return 1;

    if(p%2)
    {
        ll x=bigMod(a,p-1,m)%m*a%m;
        x=x%m;

        return x;
    }

    ll x=bigMod(a,p/2,m);
    x=(x*x)%m;

    return x;
}

int main()
{
    freopen("in.txt","r",stdin);

    int i,j,k;
    int n;

    ll a,p,m;
    while(cin>>a>>p>>m)
        cout<<bigMod(a,p,m)<<endl;

    return 0;
}
