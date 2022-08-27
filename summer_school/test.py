from functools import reduce

r, l = [int(i)for i in input().split()]

dp = [0]

for i in range(r, l+1):
    dp.append(dp[-1]^i)

print(dp, l^r-1)