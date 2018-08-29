# from dust i have come, dust i will be

n = int(input())
while n > 0:
    n -= 1

    s, d = map(int, input().split())  # a+b + a-b = 2a = s+d

    if s>=d and (s+d)%2==0:
        a=(s+d)//2
        b=(s-d)//2

        print(a,b)

    else:
        print('impossible')
