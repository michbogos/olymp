input()

d= {}
nums = []

for i in input().split():
    try:
        d[int(i)] += 1
    except:
        d[int(i)] = 1

for i in d:
    if d[i] < 2:
        nums.append(i)

print(" ".join([str(i) for i in nums]))