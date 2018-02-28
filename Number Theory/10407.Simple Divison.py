# from dust i have come dust i will be

import math

while True:
    a=list(map(int,input().split()))

    m=len(a)
    if m==1:
        exit(0)

    a.pop()
    a.sort()
    x=[]
    for i in range(m-2):
        d=abs(a[i]-a[i+1])
        x.append(d)

    #print(x)
    n=x[0]
    for i in range(len(x)):
        n=math.gcd(n,x[i])

    print(n)

