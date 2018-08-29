# from dust i have come, dust i will be

import sys

for line in sys.stdin:
    a=list(line.split())
    for i in range(len(a)):
        print(a[i][::-1],end='')
        if i!=len(a)-1:
            print(' ',end='')
    print()
