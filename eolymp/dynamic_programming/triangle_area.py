import math
points = [float(i) for i in input().split()]

def area(x1, y1, x2, y2, x3, y3):
 
    return abs((x1 * (y2 - y3) + x2 * (y3 - y1)
                + x3 * (y1 - y2)) / 2.0)

def perimeter(x1, y1, x2, y2, x3, y3):
    return math.hypot(abs(x2-x1), abs(y2-y1)) + math.hypot(abs(x3-x2), abs(y3-y2)) + math.hypot(abs(x1-x3), abs(y1-y3))

print(format(perimeter(*points), ".4f"), " ", format(area(*points), ".4f"))

