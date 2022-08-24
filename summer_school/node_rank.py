n,m = [int(i) for i in input().split()]

g = [[] for i in range(n)]

visited = [False for i in range(n)]

s = [0 for i in range(n)]

for i in range(m):
    u, v = [int(i)-1 for i in input().split()]
    g[u].append(v)
    g[v].append(u)
    s[u] += 1
    s[v] += 1

print(*s)