# from dust i have come, dust i will be

while True:
    n,d,r=map(int,input().split())

    if n==0 and d==0 and r==0:
        break

    a=list(map(int,input().split()))
    b=list(map(int,input().split()))

    extra=0
    a.sort()
    b.sort(reverse=True)
    for i in range(n):
        if a[i]+b[i]<=d:
            continue

        extra+=(a[i]+b[i]-d)*r

    print(extra)


