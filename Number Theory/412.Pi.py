# from dust i have come dust i will be

import math

while 1:
    n=int(input())

    if n==0:
        exit(0)

    a=[]
    m=n
    while m>0:
        m-=1
        x=int(input())
        a.append(x)

    den=(n*(n-1))//2
    den*=6

    nume=0
    for i in range(n-1):
        for j in range(i+1,n):
            if math.gcd(a[i],a[j])==1:
                nume+=1

    if nume>0:
        x=math.sqrt(den/nume)
        print('%.6f' %round(x,6))
    else:
        print('No estimate for this data set.')

