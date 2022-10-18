num_v, num_e, start, end, days = [int(i) for i in input().split()]

visited = [0 for i in range(num_v)]

edges = []

for i in range(num_e):
    u, v = [int(i) for i in input().split()]
    edges.append([u, v])

count = 0

def util(node, edges, visited, length):
    visited[node] += 1
    print(node, length)
    if node+1 == end and length <= days:
        count += 1
    for edge in edges:
        if edge[0]-1 == node and visited[edge[1]-1]<1:
            length += 1
            util(edge[1]-1, edges, visited, length)

util(start-1, edges, visited, 0)

print(count)