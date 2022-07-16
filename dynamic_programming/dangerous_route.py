num_towns, num_edges = [int(i) for i in input().split()]

edges = []

for i in range(num_edges):
    edges.append([int(i) for i in input().split()])

visited = [False for i in range(num_towns)]

costs = []

def dfs(node, visited, edges, end, cost):
    costs = [min(costs)]
    visited[node] = True
    c = cost
    for i in edges:
        if i[0]-1 == node:
            if i[2] > cost:
                c = i[2]
        if node == end-1:
            costs.append(c)
        if i[0]-1 == node and visited[i[1]-1] == False:
            dfs(i[1]-1, visited, edges, end, c)
    return
        
dfs(0, visited, edges, num_towns, 0)

print(min(costs))
