# from dust i have come dust i will be

from sys import stdin

def cnt(x):
    sum=0
    while x>0:
        sum+=(x%10)
        x//=10
    return sum

a=[0]*1001
a[1]=1
fact=[0]*1001
fact[0]=fact[1]=1

for i in range(2,1001):
    fact[i]=i*fact[i-1]
    a[i]=cnt(fact[i])

for line in stdin:
    i=int(line)
    print(a[i])
