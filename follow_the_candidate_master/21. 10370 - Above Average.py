# from dust i have come, dust i will be

import sys

n=int(input())
while n>0:
    n-=1

    a=list(map(int,input().split()))

    s=sum(a)-a[0]
    avg=s/a[0]

    cnt=0

    for i in range(1,a[0]+1):
        if a[i]>avg:
            cnt+=1
    
    ans=cnt/a[0]*100
    sys.stdout.write('%.3f'%ans)
    print('%')
