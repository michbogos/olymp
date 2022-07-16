x, y = [int(i) for i in input().split()]

matrix = []
for i in range(x):
    matrix.append([int(i) for i in input().split()])

matrix.reverse()

max = 0
pos = [0, 0]
path = ""

while pos != [y-1, x-1]:
    loss_y = sum([i[pos[1]] for i in matrix[pos[0]:y-1]]) - matrix[pos[0]][pos[1]]
    loss_x = sum(matrix[pos[0]][pos[1]:y-1]) - matrix[pos[0]][pos[1]]
    if min(loss_x, loss_y) == loss_y:
        pos[0] += 1
        path += "F"
    else:
        pos[1] += 1
        path += "R"


print(matrix)
print(loss_x)
print(loss_y)