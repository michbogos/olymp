import math

x1, y1, x2, y2, x, y, r = [int(i) for i in input().split()]


def distance(A, B):
    return math.hypot(A[0]-B[0], A[1]-B[1])

def dot(A, B):
    return A[0]*B[0] + A[1]+B[1]

def CrossProduct(A, B, C):
    AB = (B[0]-A[0], B[1]-A[1])
    AC = (C[0]-A[0], C[1]-A[0])
    return AB[0]*AC[1] - AB[1]*AC[0]

def Intersection(radius, O, P, Q):
    min_dist = 10e10
    max_dist = max(distance(O, P), distance(O, Q))
    if(dot((O[0]-P[0], O[1]-P[1]), (Q[0]-P[0], Q[1]-P[1])) > 0 and dot((O[0]-Q[0], O[1]-Q[1]), (P[0]-Q[0], P[1]-Q[1])) > 0):
        min_dist = CrossProduct(O,P,Q)/math.hypot(P[0]-Q[0], P[1]-Q[1])
    else:
        min_dist = min(distance(O, P), distance(O, Q))
    
    if min_dist <= radius and max_dist >= radius:
        return True
    else:
        return False

if not Intersection(r, (x, y), (x1, y1), (x2, y2)):
    print(format(math.hypot(x2-x1, y2-y1), ".3f"))
else:
    norm_rot = (x+(x/(math.hypot(x, y))*r), y+(-y/(math.hypot(x, y))*r))
    print(format(math.hypot(norm_rot[0]-x1, norm_rot[1]-y1)+math.hypot(x2-norm_rot[0], y2-norm_rot[1]), ".3f"))

