# from dust i have come, dust i will be

t=int(input())
while t:
    t-=1
    n=int(input())

    n*=567
    n//=9
    n+=7492
    n*=235
    n//=47
    n-=498

    s=str(n)
    print(s[len(s)-2])
