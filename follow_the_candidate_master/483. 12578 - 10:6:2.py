# from dust i have come, dust i will be

import sys
import math

n=int(input())

while n>0:
    n-=1
    L=int(input())

    #L:W=10:6, L:r=5:1
    W=(6*L)/10
    R=L/5

    rec=L*W
    cir=math.pi*R*R

    sys.stdout.write('%.2f %.2f\n'%(cir,rec-cir))
