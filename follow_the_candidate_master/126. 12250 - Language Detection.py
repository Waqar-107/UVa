# from dust i have come, dust i will be

import sys

dict={}

dict["HELLO"]="ENGLISH"
dict["HOLA"]="SPANISH"
dict["HALLO"]="GERMAN"
dict["BONJOUR"]="FRENCH"
dict["CIAO"]="ITALIAN"
dict["ZDRAVSTVUJTE"]="RUSSIAN"

c=0
while True:
    s=input()
    c+=1

    if s=="#":
        break

    if s in dict.keys():
        sys.stdout.write('Case %d: %s'%(c,dict[s]))
    else:
        sys.stdout.write("Case %d: UNKNOWN"%c)
    
    print()
