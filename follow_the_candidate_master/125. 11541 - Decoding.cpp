/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 120
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
#define pp pair<int,int>

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m,x,y;
    char ch;
    string s,t;

    cin>>n;
    for(i=1;i<=n;i++)
    {
        printf("Case %d: ",i);

        cin>>s;

        j=0; m=s.length();
        while(j<m)
        {
            ch=s[j]; j++;t="";

            while(j<m)
            {
                if(isalpha(s[j])) break;
                t.pb(s[j]);j++;
            }

            x=0;k=1;
            for(y=t.length()-1;y>=0;y--)
            {
                x+=(k*(t[y]-48));
                k*=10;
            }

            while(x--)
                cout<<ch;
        }

        nl
    }

    return 0;
}
