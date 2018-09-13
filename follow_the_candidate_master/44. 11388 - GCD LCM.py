# from dust i have come, dust i will be

n=int(input())

while n>0:
    n-=1
    g,l=map(int,input().split())

    if l%g==0:
        print(g,l)
    else:
        print(-1)
