a, b = [int(i) for i in input().split()]

count = 0

for i in range(1):
    for u in range(12):
        for y in range(12):
            if a == y or a == u:
                count += 1
                continue
            elif b == y or b == u:
                count += 1
                continue

print(count)