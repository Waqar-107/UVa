# from dust i have come dust i will be

from sys import stdin

fact=[0]*1001
fact[0]=fact[1]=1

for i in range(2,1001):
    fact[i]=i*fact[i-1]


for line in stdin:
    i=int(line)
    print(str(i)+'!')
    print(fact[i])
