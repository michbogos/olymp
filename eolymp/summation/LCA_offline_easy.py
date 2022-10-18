n = int(input())
from itertools import chain

ancestors = [-1 for i in range(n)]

for i in range(n):
    command, a, b = input().split()
    a = int(a)
    b = int(b)
    if command == "ADD":
        ancestors[b-1] = a-1
    if command == "GET":
        patha = [a-1]
        pathb = [b-1]
        node = a-1
        while node != 0:
            patha.append(ancestors[node])
            node = ancestors[node]
        node = b-1
        while node != 0:
            pathb.append(ancestors[node])
            node = ancestors[node]

        print(max(set(patha).intersection(pathb))+1)