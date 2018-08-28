# from dust i have come, dust i will be

import sys

case=1
t=int(input())
while t:
    t-=1
    a,b,c=map(int,input().split())

    type=""
    if (a+b>c) and (b+c>a) and (c+a>b):
        if a==b and b==c:
            type="Equilateral"
        elif a==b or b==c or c==a:
            type="Isosceles"
        else:
            type="Scalene"
    else:
        type="Invalid"

    sys.stdout.write('Case %d: %s\n'%(case,type))
    case+=1
