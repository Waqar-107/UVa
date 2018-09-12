/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 200000100
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

bool prime[N];
pp twin[100001];

void sieve()
{
    ll i,j,k;
    ll prev=-1;

    memset(prime,0,sizeof(prime));

    int pos=1;
    for(i=3;pos<=100000;i+=2)
    {
        if(!prime[i])
        {
            for(j=i*i;j<N;j+=i)
                prime[j]=1;

            if(prev+2==i)
                twin[pos++]={prev,i};

            prev=i;
        }
    }
}

int main()
{
    freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;

    sieve();

    while(cin>>n)
        printf("(%lld, %lld)\n",twin[n].first,twin[n].second);

    return 0;
}
