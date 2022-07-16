n = int(input())

matrix = []
connections = []

for i in range(n):
    matrix.append([int(u) for u in input().split()])


for i in range(len(matrix)):
    for u in range(len(matrix[i])):
        if matrix[i][u]:
            if sorted([i + 1, u + 1]) not in connections:
                connections.append([i + 1, u + 1])
connections = sorted(connections, key = lambda item:item[0])

for i in connections:
    print(" ".join([str(u) for u in i]))
