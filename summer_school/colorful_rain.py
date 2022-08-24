n = int(input())
m = [0 for i in range(n)]

for i in range(n):
    m[i] = [int(u) for u in input().split()]

g = [[] for i in range(n)]

for i in range(len(m)):
    for u in range(len(m)):
        if m[i][u]:
            g[i].append(u)

input()

colors = [int(i) for i in input().split()]

count = 0

for i in range(len(g)):
    for edge in g[i]:
        if colors[edge] != colors[i]:
            count += 1

print(count//2)