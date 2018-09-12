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

int main()
{
    freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;
    string s;

    int x[]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};

    while(cin>>s)
    {
        n=s.length();
        for(i=0;i<n;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                s[i]=x[s[i]-'A']+48;
        }

        cout<<s<<endl;
    }

    return 0;
}
