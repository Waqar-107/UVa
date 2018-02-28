# from dust i have come dust i will be

import math

n=int(input())

while n>0:
    n-=1
    a=list(map(int,input().split()))

    mx=1
    m=len(a)
    for i in range(m-1):
        for j in range(i+1,m):
            mx=max(mx,math.gcd(a[i],a[j]))

    print(mx)
