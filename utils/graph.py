class Graph:
    def __init__(self):
        self.edges = []
        self.visited = []
        self.adjacent = 0
        pass
    def from_matrix(self, matrix):
        self.visited = [False for i in range(len(matrix))]
        for i in matrix:
            self.edges.append([])
        for i in range(len(matrix)):
            for u in range(len(matrix[i])):
                if matrix[i][u] == 1:
                    self.edges[i].append(u)
    def dfs_util(self, node,visited):
        visited[node] = True
        self.adjacent += 1
        for i in self.edges[node]:
            if visited[i] == False:
                self.dfs_util(i, visited)

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