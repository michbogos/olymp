n, m = [int(i) for i in input().split()]

edges = []

matrix = [[0] * n for u in range(n)]

for i in range(m):
    edges.append([int(u) for u in input().split()])

for i in range(len(edges)):
    matrix[edges[i][0]-1] [edges[i][1]-1] = 1
    matrix[edges[i][1]-1] [edges[i][0]-1] = 1

for i in matrix:
    print(" ".join([str(u) for u in i]))
