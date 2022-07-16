n = int(input())

unique = set([])
d = {}

for i in [int(u) for u in input().split()]:
    if i not in unique:
        unique.add(i)
        d[i] = 1
    else:
        d[i] += 1

n_requests = int(input())

for i in [int(u) for u in input().split()]:
    try:
        print(d[i])
    except KeyError:
        print(0)
