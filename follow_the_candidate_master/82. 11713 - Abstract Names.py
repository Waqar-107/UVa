# from dust i have come, dust i will be

n=int(input())
vowel=['a','e','i','o','u']

while n>0:
    n-=1

    a=input()
    b=input()

    if len(a)==len(b):
        f=1
        for i in range(len(a)):
            if a[i] in vowel and b[i] in vowel:
                continue
            else:
                if a[i]!=b[i]:
                    f=0
                    break
        if f:
            print('Yes')
        else:
            print('No')


    else:
        print('No')

