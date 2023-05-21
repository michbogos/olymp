import math
w0, h0 = sorted([int(i) for i in input().split()])
w, h = sorted([int(i) for i in input().split()])

if w0 >= w and h0 >= h:
    print("Possible")
    exit(0)
if w0 > w:
    print("Impossible")
    exit(0)




d = math.hypot(w0, h0)
beta = math.asin(h0/d)
alpha = math.asin(h/d)
gamma = alpha-beta

if w0*math.sin(gamma)+h0*math.cos(gamma)<=d:
    print("Possible")
else:
    print("Impossible")