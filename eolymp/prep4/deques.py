from collections import deque

deques = {}

for i in range(int(input())):
    args = input().split()
    if len(args) == 3:
        command = args[0]
        a = int(args[1])
        b = int(args[2])
    else:
        command = args[0]
        a = int(args[1])
    if command == "pushback":
        try:
            deques[a].appendleft(b)
        except:
            deques[a] = deque([b])
    if command == "pushfront":
        try:
            deques[a].append(b)
        except:
            deques[a] = deque([b])
    if command == "popback":
        print(deques[a].popleft())
    if command == "popfront":
        print(deques[a].pop())