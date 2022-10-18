n, m =  [int(i) for i in input().split()]

edges = []

for i in range(m):
    a, b, c = [int(i) for i in input().split()]
    edges.append([a-1, b-1, 1/c])
    edges.append([b-1, a-1, 1/c])

d = [1e7 for i in range(n)]

d[0] = 0

for i in range(n):
    changed = False
    for j in range(len(edges)):
        if (d[edges[j][0]] < 1e7):
                if (d[edges[j][1]] > d[edges[j][0]] + edges[j][2]):
                    d[edges[j][1]] = d[edges[j][0]] + edges[j][2]
                    changed = True
    if not changed:
        break

del d[0];

for i in d:
    print(format(i, ".8f"))
