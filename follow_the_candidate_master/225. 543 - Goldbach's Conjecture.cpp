/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1000100
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
vector<int> vec;

void sieve()
{
    int i,j,k;

    k=sqrt(N)+1;
    memset(prime,0,sizeof(prime));

    for(i=3;i<=k;i+=2)
    {
        if(!prime[i])
        {
            for(j=i*i;j<N;j+=i)
                prime[j]=1;

            vec.pb(i);
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
    {
        if(!n) break;

        for(i=0;i<vec.size();i++)
        {
            if(!prime[n-vec[i]]){
                printf("%d = %d + %d\n",n,vec[i],n-vec[i]);
                break;
            }
        }
    }


    return 0;
}
