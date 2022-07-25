import math

tris = [int(i) for i in input().split()]

def angle(a, b, c): return math.degrees(math.acos((a**2 + b**2 - c**2)/(2.0 * a * b)))

def equal(a,b,c, a1, b1, c1):
    aa = angle(a,b,c)
    bb = angle(b,a,c)
    cc = 180 - aa - bb

    aa1 = angle(a1, b1, c1)
    bb1 = angle(b1, a1, c1)
    cc1 = 180 - aa1 - bb1

    return sorted([aa, bb, cc]) == sorted([aa1, bb1, cc1])




print(int(equal(tris[0], tris[1], tris[2], tris[3], tris[4], tris[5])))