import collections


d = {}

for _ in range(int(input())):
    k, v = [int(i) for i in input().split()]
    d[k] = v

k = int(input())

od = collections.OrderedDict(sorted(d.items()))

idx = 1

for key, v in od.items():
    if(idx+v >= k):
        print(key)
        exit(0)
    else:
        idx+=v