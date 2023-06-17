a1, b1, c1, a2, b2, c2 = [int(i) for i in input().split()]

a1, b1, c1 = sorted([a1, b1, c1])

a2, b2, c2 = sorted([a2, b2, c2])

if a1/a2 == b1/b2 and b1/b2 == c1/c2:
    print(1)
else:
    print(0)