# from dust i have come, dust i will be

import sys

t=int(input())

c=1
while t>0:
    t-=1
    a=int(input())
    b=int(input())

    s=0
    if a%2==0:
        a+=1

    for i in range(a,b+1,2):
        s+=i

    sys.stdout.write('Case %d: %d\n'%(c,s))
    c+=1
