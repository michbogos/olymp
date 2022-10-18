import math
n = int(input())

add_queries = []
get_queries = []

for i in range(n):
    command, a, b = input().split()
    a = int(a)
    b = int(b)
    if command == "ADD":
        add_queries.append([a, b])
    if command == "GET":
        get_queries.append([a, b])

adj = [[] for i in range(len(add_queries)+1)]

for i in add_queries:
    adj[i[0]-1].append(i[1]-1)
    adj[i[1]-1].append(i[0]-1)

l = math.ceil(math.log2(len(adj)))
n = len(add_queries) + 1
timer = 0
tin = [None for i in range(n)]
tout = [None for i in range(n)]
visited = [False for i in range(n)]
up = [[l+1 for i in range(21)] for u in range(n)]
def dfs(v, p):
    global timer
    timer = timer + 1
    tin[v] = timer
    up[v][0] = p
    for i in range(1, l+1):
        up[v][i] = up[up[v][v-1]][i-1]
    for u in adj[v]:
        if u != p:
            dfs(u, v)
    timer = timer + 1
    tout[v] = timer

def is_ancestor(u, v):
    return tin[u] <= tin[v] and tout[u] >= tout[v]

def lca(u, v):
    if (is_ancestor(u, v)):
        return u;
    if (is_ancestor(v, u)):
        return v;
    for i in range(l):
        if is_ancestor(up[u][i], v) != True:
            u = up[u][i];
    return up[u][0];

dfs(0, 0)

for i in get_queries:
    print(lca(*i)+1)

