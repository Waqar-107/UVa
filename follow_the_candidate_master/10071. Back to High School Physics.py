# from dust i have come, dust i will be

import sys

for line in sys.stdin:
    v,t=map(int,line.split())

    if t>0:
        s=v*((2*t)**2)
        s=s//(2*t)
        print(s)
    else:
        print(0)
