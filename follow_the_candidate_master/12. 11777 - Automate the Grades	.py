# from dust i have come, dust i will be

import sys

case=0
t=int(input())
while t:
    t-=1
    case+=1

    term1,term2,final,attendnce,ct1,ct2,ct3=map(int,input().split())

    ct=max(ct1,ct2,ct3)+((ct1+ct2+ct3)-max(ct1,ct2,ct3)-min(ct1,ct2,ct3))
    ct/=2

    total=term1+term2+final+attendnce+ct

    if total>=90:
        g="A"
    elif total>=80 and total<90:
        g="B"
    elif total>=70 and total<80:
        g="C"
    elif total>=60 and total<70:
        g="D"
    else:
        g="F"

    sys.stdout.write('Case %d: %s\n'%(case,g))

