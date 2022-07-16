import math

for i in range(int(input())):
    a, b = [int(u) for u in input().split()]
    c, d = [int(u) for u in input().split()]
    if math.gcd(a, b) == math.gcd(c, d):
        print("YES")
    else:
        print("NO")