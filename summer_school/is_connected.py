n,m = [int(i) for i in input().split()]

g = [[] for i in range(n)]

visited = [False for i in range(n)]

for i in range(m):
    u, v = [int(i)-1 for i in input().split()]
    g[u].append(v)
    g[v].append(u)

def dfs(v):
    visited[v] = True
    for edge in g[v]:
        if not visited[edge]:
            dfs(edge)

dfs(0)

if False in visited:
    print("NO")
else:
    print("YES")
