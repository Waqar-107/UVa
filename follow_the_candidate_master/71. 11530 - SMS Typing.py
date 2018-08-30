# from dust i have come, dust i will be

import sys

dict = [1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4]

n = int(input())
for i in range(n):
    s=input()

    cnt=0
    for j in range(len(s)):
        if s[j]==' ':
            cnt+=1
        else:
            cnt+=dict[ord(s[j])-97]

    sys.stdout.write('Case #%d: %d\n'%(i+1,cnt))
