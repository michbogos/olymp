from curses.ascii import NL

n, m = [int(i) for i in input().split()]

visited = [[False for i in range(m)] for u in range(n)]

options = [ [1, 1],
            [-1, 1], 
            [-1, -1], 
            [0, -1],
            [0, 1], 
            [-1, 0],
            [1, 0],
            [1, -1]]

paper = [[0 for u in range(m)] for i in range(n)]

for i in range(n):
    s = input()
    for u in range(len(s)):
        paper[i][u] = s[u]

for i in range(n):
    for u in range(m):
        if paper[i][u] == "#":
            visited[i][u] = False
        else:
            paper[i][u] = True

x, y = [0, 0]
color = paper[x][y]

def dfs(x, y):
    visited[x][y] = True
    for option in options:
        if x + option[0] > 0 and x + option[0] < m and y + option[1] > 0 and y + option[1] < n:
            if paper[option[0] + x][option[1] + y] == color:
                if not visited[x][y]:
                    dfs(option[0] + x, option[1] + y)

def index_2d(v, myList = visited):
    for i, x in enumerate(myList):
        if v in x:
            return i, x.index(v)

do = True
count = 0

while do:
    x, y = index_2d(False)
    if x != False:
        dfs(x, y)
        count += 1
    else:
        print(count)

print(visited)