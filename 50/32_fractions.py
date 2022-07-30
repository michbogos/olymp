n, p, q = [int(i) for i in input().split()]

fractions = []

for i in range(1, n):
    for u in range(1, 10000):
        if u%i != 0:
            if u/i > 1/p and u/i < 1/q:
                fractions.append([u, i])

for pair in sorted(fractions, key=lambda x: x[0]/x[1]):
    print("/".join([str(i) for i in pair]))