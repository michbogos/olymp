from collections import deque
import fileinput

teams = []
for i in range(int(input())):
    teams.append([int(i) for i in input().split()[1:]])
q = deque([])

while True:
    line = input()
    if line == "DEQUEUE":
        print(q[-1])
        q.pop()
    elif line.split(" ")[0] == "ENQUEUE":
        for team in teams:
            if int(line.split(" ")[1]) in team:
                try:
                    idx = max([q.index(k) for k in team])
                except:
                    idx = -1
                if idx == -1:
                    q.appendleft(int(line.split(" ")[1]))
                else:
                    print(idx)
                    q.insert(idx, int(line.split(" ")[1]))
