# from dust i have come, dust i will be

t=int(input())

while t>0:
    t-=1
    n,m=map(int,input().split())
    
    if n<m:
        print('<')
    elif n>m:
        print('>')
    else:
        print('=')
