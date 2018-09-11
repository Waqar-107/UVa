# from dust i have come, dust i will be

def solve():
    a,b,c=map(int,input().split())
    if a==b and b==c and c==0:
        exit(0)

    if pow(a,2)+pow(b,2)==pow(c,2):
        print('right')

    elif pow(a,2)+pow(c,2)==pow(b,2):
        print('right')

    elif pow(c,2)+pow(b,2)==pow(a,2):
        print('right')

    else:
        print('wrong')

while True:
    solve()
