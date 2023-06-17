a, b, c, d = [int(i) for i in input().split()]

a, b = sorted([a, b])
c, d = sorted([c, d])

if (a < c and b < d) or (a > c and b > d):
    print(1)
else:
    print(0)