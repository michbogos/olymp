n = int(input())

nums = [int(i) for i in input().split()]

d = {}

for i in nums:
        try:
            d[i] += 1

        except:
            d[i] = 1

vals = [d[i] for i in d]

count = 0

for i in vals:
    count += i//4

print(count)
