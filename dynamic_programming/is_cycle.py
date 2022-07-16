n = int(input())

class Graph:
    def __init__(self):
        self.edges = []
        self.visited = []
        self.adjacent = 0
        pass
    def from_matrix(self, matrix):
        self.visited = [0 for i in range(len(matrix))]
        for i in matrix:
            self.edges.append([])
        for i in range(len(matrix)):
            for u in range(len(matrix[i])):
                if matrix[i][u] == 1:
                    self.edges[i].append(u)
    def dfs_util(self, node,visited):
        visited[node] += 1
        for i in self.edges[node]:
            if visited[node] < 3:
                self.dfs_util(i, visited)
        return 0

matrix = []
connections = []
islands  = []

for i in range(n):
    matrix.append([int(u) for u in input().split()])

g = Graph()
g.from_matrix(matrix)
g.dfs_util(0, g.visited)

if 3 in g.visited:
    print(1)
else:
    print(0)


