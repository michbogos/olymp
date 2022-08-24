from queue import Queue

n = int(input())
x1, y1 = [int(i) for i in input().split()]
x2, y2 = [int(i) for i in input().split()]

visited = [[False for _ in range(n)] for _ in range(n)]

options = [ [2, 1],
            [-2, 1], 
            [-2, -1], 
            [2, -1],
            [1, 2], 
            [1, -2],
            [-1, 2],
            [-1, -2]]

x = x1
y = y1

def f(ans):
    print(ans)
    exit()

iteration = 0

q  = Queue(0)
q.put([x, y])
while q:
    x, y = q.get()
    for option in options:
        if x + option[0] > 0 and x + option[0] < n and y + option[1] > 0 and y + option[1] < n:
            if x + option[0] == x2 and y + option[1] == y2:
                print(iteration)
                exit()
        if x + option[0] > 0 and x + option[0] <= n and y + option[1] > 0 and y + option[1] <= n:
            if not visited[x+option[0]-1][y+option[1]-1]:
                visited[x+option[0]-1][y+option[1]-1] = True
                q.put([x+option[0], y+option[1]])
    iteration += 1
        