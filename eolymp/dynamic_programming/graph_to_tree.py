num_v, num_e = [int(i) for i in input().split()]

visited = [0 for i in range(num_v)]

edges = []

for i in range(num_e):
    u, v = [int(i) for i in input().split()]
    edges.append([u, v])

tree = []

def util(node, previous, edges, visited):
    tree.append([node, previous])
    visited[node] += 1
    for edge in edges:
        if edge[0]-1 == node and visited[edge[1]-1]<1:
            util(edge[1]-1, node, edges, visited)


util(0, None, edges, visited)

del tree[0]

for i in tree:
    i.reverse()
    i[0] += 1
    i[1] += 1
    i[0] = str(i[0])
    i[1] = str(i[1])
    print(" ".join(i))