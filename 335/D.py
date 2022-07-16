n = int(input())

counter = 0

for i in range(n):
    a, b = [int(u) for u in input().split(" ")]
    if a - b >= 2:
        counter += 1
print(counter)
