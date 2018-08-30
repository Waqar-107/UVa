# from dust i have come, dust i will be

import sys

n=int(input())

for i in range(1,n+1):

    c,d=map(int,input().split())

    F=(9*c)/5+32
    F+=d

    ans=((F-32)*5)/9
    sys.stdout.write('Case %d: %.2f\n'%(i,ans))
