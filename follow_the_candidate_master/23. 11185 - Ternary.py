# from dust i have come, dust i will be

def ternary(n):
    a=[]
    while True:
        r=n%3
        a.append(r)
        n=n//3

        if n==0:
            break

    a=a[::-1]
    for i in range(len(a)):
        print(a[i],end='')
    
    print()

while True:
    n=int(input())

    if n<0:
        break
        
    ternary(n)
