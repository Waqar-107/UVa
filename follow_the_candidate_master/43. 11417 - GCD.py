# from dust i have come, dust i will be

import math

def solve(n):
    g=0
    for i in range(1,n):
        for j in range(i+1,n+1):
            g+=math.gcd(i,j)

    return g


while True:
    n=int(input())

    if n==0:
        break

    print(solve(n))
