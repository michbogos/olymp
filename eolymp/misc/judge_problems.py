from collections import defaultdict
n = int(input())
dom, kattis = (defaultdict(int), defaultdict(int))
for _ in range(n):
    dom[input()] += 1
for _ in range(n):
    kattis[input()] += 1
print(sum([min(kattis[res], dom[res]) for res in min([kattis, dom], key=len)]))