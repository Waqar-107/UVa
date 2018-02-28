/***from dust i have come, dust i will be***/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define dbg printf("in\n");
#define nl printf("\n");
#define N 1000010

#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

typedef long long int ll;

int idx;
int prime[N];
int a[N];

void sieve()
{
    int i,j,k;

    memset(a,0,sizeof(a));
    idx=0;

    k=sqrt(N)+1;
    for(i=3;i<k;i++)
    {
        if(!a[i])
        {
            for(j=i+i;j<N;j+=i)
                a[j]=1;
        }
    }

    for(i=3;i<N;i+=2)
    {
        if(!a[i])
            prime[idx++]=i;
    }
}

int main()
{
    freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m,x,y;

    sieve();

    while(1)
    {
        scanf("%d",&n);

        if(!n)
            return 0;

        k=0;
        for(i=0;i<idx;i++)
        {
            x=prime[i];
            y=n-x;

            if(y<3)
                break;

            if(!a[y])
            {
                printf("%d = %d + %d\n",n,x,y);
                k=1;
                break;
            }
        }

        if(!k)
            printf("Goldbach's conjecture is wrong.\n");
    }

    return 0;
}
