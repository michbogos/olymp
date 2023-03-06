from collections import defaultdict
d = defaultdict(int)
for _ in range(int(input())):
    d[len(input().split())]+= 1
d = sorted(d.items(), key=lambda k_v: k_v[0])
for k, v in d:
    print(k, v)