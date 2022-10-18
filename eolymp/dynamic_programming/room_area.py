n = int(input())

room_matrix = [[] for i in range(n)]

visited = [[0 for i in range(n)] for u in range(n)]


for i in range(n):
    for u in input():
        if u == ".":
            room_matrix[i].append(True)
        if u == "*":
            room_matrix[i].append(False)

x, y = [int(i) for i in input().split()]

for i in range(len(room_matrix)):
    for u in range(len(room_matrix[i])):
        if not room_matrix[i][u]:
            visited[i][u] = 1e7


def step(x, y, area):
    visited[x][y] += 1
    area += 1
    neighbors = []
    for i in [[x, y+1],[x-1, y],[x+1, y],[x, y-1]]:
        try:
            neighbors.append([i[0], i[1]])
        except:
            pass
    for i in neighbors:
        if visited[i[0]][i[1]] < 3:
            step(i[0], i[1], area)
    return area
a=step(x-1, y-1, 0)

print(a)


