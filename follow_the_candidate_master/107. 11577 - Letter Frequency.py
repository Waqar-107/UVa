# from dust i have come, dust i will be

n=int(input())
while n>0:
    n-=1

    s=input()
    s=s.lower()

    a=[0]*30

    for i in range(len(s)):
        if s[i]>='a' and s[i]<='z':
            a[ord(s[i])-ord('a')]+=1

    mx=0
    for i in range(26):
        mx=max(mx,a[i])

    ans=[]
    for i in range(26):
        if a[i]==mx:
            ans.append(chr(i+ord('a')))

    for i in ans:
        print(i,end='')

    print()
