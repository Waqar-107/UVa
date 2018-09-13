# from dust i have come, dust i will be

n=int(input())

print('Lumberjacks:')
while n>0:
    n-=1

    a=list(map(int,input().split()))

    #ascending
    x=1
    for i in range(1,len(a)):
        if a[i-1]>a[i]:
            x=0
            break

    #descending
    y=1
    for i in range(1,len(a)):
        if a[i-1]<a[i]:
            y=0
            break

    if x or y:
        print('Ordered')
    else:
        print('Unordered')


