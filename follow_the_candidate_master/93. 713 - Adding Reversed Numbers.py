# from dust i have come, dust i will be

n=int(input())
for i in range(n):
    n,m=map(str,input().split())
    n=n[::-1]
    m=m[::-1]

    x=int(n)+int(m)
    ans=str(x)
    ans=ans[::-1]
    print(int(ans))
