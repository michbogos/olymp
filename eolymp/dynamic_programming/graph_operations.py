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
    def from_edges(self, edges):
        self.edges = edges
    def dfs_util(self, node,visited):
        visited[node] = True
        self.adjacent += 1
        for i in self.edges[node]:
            if visited[i] == False:
                self.dfs_util(i, visited)

g = Graph()

num_verticies, num_edges, num_requests = [int(i) for i in input().split()]

edges = []

for i in range(num_edges):
    edges.append()

visited = [False for i in range(num_verticies)]

def util(node, visited, edges, query):
    visited[node] = True
    for i in edges:
        if i[1] == query:
            return True
        if i[0]-1 == node and visited[i[0]-1] == False:
            util(i[1]-1, visited, edges, query)
        return False

for i in range(num_requests):
    command, u, v = [i for i in input().split()]
    u = int(u)
    v = int(v)
    if command == "cut":
        try:
            del edges[edges.index([u, v])]
        except:
            del edges[edges.index([v, u])]
    elif command == "ask":
        visited = [False for i in range(num_verticies)]
        print(util(u-1, visited, edges, v-1))