from functools import reduce


xc = []
yc = []

for i in range(3):
    x, y = [int(i) for i in input().split()]
    xc.append(x)
    yc.append(y)

print(reduce(lambda x, y: x^y, xc), reduce(lambda x, y: x^y, yc))