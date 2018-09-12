# from dust i have come, dust i will be

import sys


def rat(x):
    while x > 9:
        sum = 0
        while x > 0:
            sum += x % 10
            x = x // 10

        x = sum

    return x


def solve(g, b):
    g = g.lower()
    b = b.lower()

    x = 0
    for i in range(len(g)):
        if g[i] >= 'a' and g[i] <= 'z':
            x += (ord(g[i]) - ord('a') + 1)

    y = 0
    for i in range(len(b)):
        if b[i] >= 'a' and b[i] <= 'z':
            y += (ord(b[i]) - ord('a') + 1)

    x = rat(x)
    y = rat(y)
    
    if x > y:
        x, y = y, x

    ans = (x / y) * 100
    sys.stdout.write('%.2f' % ans)
    print(' %')


for line in sys.stdin:
    g = line
    b = input()

    solve(g, b)
    f = 0
