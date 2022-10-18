import math

x1, y1, x2, y2 = [int(i) for i in input().split()]

x = abs(x2 - x1)

y = abs(y2 - y1)

print(math.gcd(x, y)+ 1)
