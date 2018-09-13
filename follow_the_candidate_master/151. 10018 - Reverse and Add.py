# from dust i have come, dust i will be

def palindrome(n):
    n=str(n)

    i=0
    j=len(n)-1

    while i<j:
        if n[i]!=n[j]:
            return False
        i+=1
        j-=1

    return True

def solve(n):
    cnt=0

    while True:
        m=str(n)
        m=m[::-1]
        m=int(m)
        n=n+m
        cnt+=1

        if palindrome(n):
            print(cnt,n)
            return

n=int(input())
while n>0:
    n-=1
    a=int(input())
    solve(a)


