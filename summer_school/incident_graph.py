n,m = [int(i) for i in input().split()]

g = [[] for i in range(n)]

visited = [False for i in range(n)]

for i in range(m):
    u, v = [int(i)-1 for i in input().split()]
    g[u].append([v, i])
    g[v].append([u, i])

s = [["0" for i in range(m)] for u in range(n)]

for i in range(len(g)):
    for edge in g[i]:
        s[i][edge[1]] = "1"

for line in s:
    print(" ".join(line))
