d = {}

for i in range(10):
    d[i] = 0

count = 0
for i in input().split():
    d[int(i)] += 1
    if d[int(i)] == 2:
        count += 1
        d[int(i)] = 0

print(count)