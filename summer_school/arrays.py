from functools import reduce
n = int(input())

if n == 1:
    print(1)
    exit()

s = []

for i in range(n):
    s.append(set([int(i) for i in input().split()][1::]))
print(len(reduce(lambda x, y: x.union(y), s)))