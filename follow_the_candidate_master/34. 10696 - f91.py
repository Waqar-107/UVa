# from dust i have come, dust i will be

import sys

while True:
    n=int(input())

    if n==0:
        break

    if n<101:
        ans=91
    else:
        ans=n-10
        
    sys.stdout.write('f91(%d) = %d\n'%(n,ans))

