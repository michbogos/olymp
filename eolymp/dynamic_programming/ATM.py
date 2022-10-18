import math
s = int(input())

count = -1

if s%10 == 0:
    count += 1
    for i in [500, 200, 100, 50, 20, 10]:
        count += s // i
        s %= i

print(count)
