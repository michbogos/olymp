x1, y1, x2, y2, x3, y3, x4, y4 = [int(i) for i in input().split()]

def dot(a, b):
    return a[0]*b[0] + a[1]*b[1]

v1 = [x2-x1, y2-y1]
v2 = [x3-x2, y3-y2]
v3 = [x4-x3, y4-y3]
v4 = [x1-x4, y1-y4]

res = [dot(v1, v2), dot(v2, v3), dot(v3, v4), dot(v4, v1)]

print(res.count(0))