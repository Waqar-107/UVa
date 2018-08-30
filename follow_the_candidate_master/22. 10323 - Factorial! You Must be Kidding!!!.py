# from dust i have come, dust i will be

import sys

ov=6227020800
un=10000

#start=8, end=13
fact=[138]*100

fact[0]=1
fact[1]=1
for i in range(2,14):
    fact[i]=fact[i-1]*i

for line in sys.stdin:
    n=int(line)

    if n<0:
        if n%2==1:
            print('Overflow!')
        else:
            print('Underflow!')

    else:
        if n>13:
            print('Overflow!')
        else:
            if fact[n]<10000:
                print('Underflow!')
            else:
                print(fact[n])
