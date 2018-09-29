# from dust i have come, dust i will be

import sys

data=[0]*25

data[0]=1
data[1]=1

for i in range(2,25):
    for j in range(i):
        data[i]+=(data[j]*data[i-j-1])

dict={}
for i in range(25):
    dict[data[i]]=i
    
for line in sys.stdin:
    n=int(line)
    print(dict[n])
