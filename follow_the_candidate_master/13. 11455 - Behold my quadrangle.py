# from dust i have come, dust i will be

n=int(input())

while n:
    n-=1
    a=list(map(int,input().split()))

    a.sort()

    if a[0]==a[1] and a[2]==a[3]:
        if a[1]==a[2]:
            print('square')
        else:
            print('rectangle')

    elif a[0]+a[1]+a[2]>a[3]:
        print('quadrangle')

    else:
        print('banana')



