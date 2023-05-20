x1, y1, x2, y2= [int(i) for i in input().split()]
x3, y3, x4, y4 = [int(i) for i in input().split()]

a1 = y2-y1
b1 = x1-x2
c1 = x2*y1-y2*x1

a2 = y4-y3
b2 = x3-x4
c2 = x4*y3-x3*y4

d = a1*b2-a2*b1
dx = c2*b1-c1*b2
dy = a2*c1-a1*c2

if d == 0 and dx == 0 and dy == 0:
    print("2")
elif d == 0:
    print("0")
else:
    print("1")
    print(f"{dx/d} {dy/d}")