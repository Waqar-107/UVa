# from dust i have come, dust i will be

import sys
import math

c = 1
while True:
    line = list(map(str, input().split()))

    if line[0] == "0":
        exit(0)

    if line[0] == "1":
        # u,v,t->s a
        u = float(line[1])
        v = float(line[2])
        t = float(line[3])

        a = (v - u) / t
        s = u * t + 0.5 * a * t * t

        sys.stdout.write('Case %d: %.3f %.3f\n' % (c, s, a))
    elif line[0] == "2":
        # u,v,a-> s t
        u = float(line[1])
        v = float(line[2])
        a = float(line[3])

        t = (v - u) / a
        s = u * t + 0.5 * a * t * t

        sys.stdout.write('Case %d: %.3f %.3f\n' % (c, s, t))
    elif line[0] == "3":
        # u,a,s->v t
        u = float(line[1])
        a = float(line[2])
        s = float(line[3])

        v=math.sqrt(u*u+2*a*s)
        t = (v - u) / a

        sys.stdout.write('Case %d: %.3f %.3f\n' % (c, v, t))
    else:
        # v a s-> u t
        v = float(line[1])
        a = float(line[2])
        s = float(line[3])

        u = math.sqrt(v * v - 2 * a * s)
        t = (v - u) / a

        sys.stdout.write('Case %d: %.3f %.3f\n' % (c, u, t))

    c+=1
