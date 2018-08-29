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
#define pfl(n) printf("%I64d\n",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m,t,h;
    int curr, temp;

    sf(t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d:%d",&n,&h,&m);

        curr=h*60+m;
        int ans=0xfffffff;

        while(n--)
        {
            scanf("%d:%d%d",&h,&m,&k);
            temp=h*60+m;

            //the arrival time is before i am arriving
            if(temp<curr)
                k+=(24*60-curr+temp);

            else
                k+=(temp-curr);

            ans=min(ans,k);
        }

        printf("Case %d: %d\n",i,ans);
    }

    return 0;
}
