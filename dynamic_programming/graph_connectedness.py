num_v, num_e = [int(i) for i in input().split()]

visited = [False for i in range(num_v)]

edges = []

for i in range(num_e):
    u, v = [int(i) for i in input().split()]
    edges.append([u, v])
    edges.append([v, u])

def util(node, edges, visited):
    visited[node] = True
    for edge in edges:
        if edge[0]-1 == node and visited[edge[1]-1]==False:
            util(edge[1]-1, edges, visited)

util(0, edges, visited)

if False in visited:
    print("NO")
else:
    print("YES")