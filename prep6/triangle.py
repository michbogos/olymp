from copy import deepcopy

n = int(input())
triangle = []

for i in range(n):
    triangle.append([int(i) for i in input().split()])

dynamic = deepcopy(triangle)

for row in range(len(dynamic)):
    for i in range(len(dynamic[row])):
        dynamic[row][i] = 0

dynamic[0][0] = triangle[0][0]

for i in range(1, len(triangle)):
    for u in range(len(triangle[i])):
        if u == 0:
            dynamic[i][u] = dynamic[i-1][u] + triangle[i][u]
        elif u == len(triangle[i])-1:
            dynamic[i][u] = dynamic[i-1][u-1] + triangle[i][u]
        else:
            dynamic[i][u] = max(dynamic[i-1][u], dynamic[i-1][u-1]) + triangle[i][u]
print(max(dynamic[-1]))