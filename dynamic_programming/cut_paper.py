from itertools import chain

y, x = [int(i) for i in input().split()]

matrix = [[] for _ in range(y)]

for i in range(y):
    s = input()
    for u in s:
        if u == ".":
            matrix[i].append(True)
        elif u == "#":
            matrix[i].append(False)


def step(y, x, matrix):
    matrix[y][x] = True
    tmp = [[y, x+1],[y, x-1],[y-1, x],[y+1, x]]
    neighbors = []
    for i in tmp:
        try:
            if matrix[i[0]][i[1]] == False:
                neighbors.append(i)
        except:
            pass
        if len(neighbors) == 0:
            return
        else:
            for i in neighbors:
                step(i[0], i[1], matrix)


count = 0

while False in chain.from_iterable(matrix):
    coord = []
    for i in matrix:
        if False in i:
            coord = [matrix.index(i), i.index(False)]
    step(coord[0], coord[1], matrix)
    count += 1

print(count)
    
    
