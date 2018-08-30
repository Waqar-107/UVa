# from dust i have come, dust i will be

def palindrome(str):

    s=""
    str=str.lower()
    for i in range(len(str)):
        if str[i]>='a' and str[i]<='z':
            s+=str[i]

    i=0
    j=len(s)-1

    while i<j:
        if s[i]!=s[j]:
            return False

        i+=1
        j-=1

    return  True

while True:
    str=input()

    if str=="DONE":
        break

    if palindrome(str):
        print("You won't be eaten!")
    else:
        print("Uh oh..")
