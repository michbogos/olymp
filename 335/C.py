n = input()

counter = 0

for i in [int(u) for u in input().split(" ")]:
    if i % 3 == 0 and i % 2 == 1:
        counter += 1

print(counter)
