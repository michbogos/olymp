rabbits = []
for i in range(int(input())):
    rabbits.append([int(i) for i in input().split()])

d = {}

for x, y in rabbits:
    if y == 0:
        y += 0.000000001
    try:
        d[round(x/y, 5)] += 1
    except:
        d[round(x/y, 5)] = 1
m = 0

for key in d:
    if d[key] > m: m = d[key]

print(m)