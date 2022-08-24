count = 0

for i in range(int(input())):
    count += sum([int(i) for i in input().split()])

count //= 2

print(count)