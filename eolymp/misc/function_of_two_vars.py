def f(a, b):
    return a**3+a**2*b+a*b**2+b**3

d = {}

for i in range(500):
    for j in range(500):
        if (j, i) in d.keys() :continue
        d[(i, j)] = f(i, j)

d = sorted(d.items(), key=lambda x: x[1])

print([k[0] for k in d])
print([k[1] for k in d])