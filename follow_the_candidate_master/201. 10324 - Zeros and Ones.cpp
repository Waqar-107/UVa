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

int z[N], o[N];

int main()
{
    freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;
    int l,r,x,y,c;
    string s;

    c=1;
    while(cin>>s)
    {
        memset(z,0,sizeof(z));
        memset(o,0,sizeof(o));

        m=s.length();
        for(i=1;i<=m;i++)
        {
            if(s[i-1]=='0')
                z[i]=z[i-1]+1, o[i]=o[i-1];
            else
                o[i]=o[i-1]+1, z[i]=z[i-1];
        }

        printf("Case %d:\n",c);c++;

        sf(n);
        while(n--)
        {
            sff(l,r);

            if(l>r)
                swap(l,r);

            l++;r++;
            x=z[r]-z[l-1];
            y=o[r]-o[l-1];

            if(!x || !y)
                pfs("Yes\n");
            else
                pfs("No\n");
        }
    }


    return 0;
}
