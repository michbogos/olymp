k = int(input())
count = 0

for a in range(1, 100):
    for b in range(1, 100):
        for c in range(1,100):
            if a*b*c <= k:
                count += 1

print(count)