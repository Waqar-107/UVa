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

int ans;
void BubbleSort(int a[],int n)
{
    int i,j,k;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]), ans++;
        }
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    while(cin>>n)
    {
        int a[n];
        for(i=0;i<n;i++)
            sf(a[i]);

        ans=0;
        BubbleSort(a,n);

        printf("Minimum exchange operations : %d\n",ans);
    }

    return 0;
}
