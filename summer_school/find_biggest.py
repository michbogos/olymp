from bisect import insort_right
input()

l = [[int(i), 0] for i in input().split()]

u = 0

for i in range(len(l)):
    l[i][1] = i+1
    u = i+1

l = sorted(l, key=lambda x: x[0])

b = l[0]
del l[0]
a = l[0]
del l[0]

while len(l) > 0:
    print(b[1], a[1])
    l.insert(1, [(a[0] + b[0])/2, u+1])
    u += 1
    a = l[0]
    del l[0]
    b = l[0]
    del l[0]

print(b[1], a[1])