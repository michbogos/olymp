n = int(input())

nums = [int(i) for i in input().split()]

d = {}

for i in nums:
        try:
            d[i] += 1

        except:
            d[i] = 1

vals = [d[i] for i in d]

m = max(vals)

mx = 1e7

for i in d:
    if d[i] == m:
        if i < mx:
            mx = i

print(mx)
