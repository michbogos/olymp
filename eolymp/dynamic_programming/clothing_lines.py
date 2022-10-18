n, m = [int(i) for i in input().split()]

lengths = []

count = 0

for i in range(n):
    lengths.append(int(input()))

low = 0

high = max(lengths)

while high - low >= 0:
    mid = (low + high)/2

    s = 0

    for line in lengths:
        s += line//mid

    if s < m:
        high = mid
    else:
        low = mid

    if count > 64:
        break
    count += 1

print(int(high))
