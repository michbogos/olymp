from functools import reduce
n = int(input())

nums = [int(i)for i in input().split()]

x = 0
dp = [0]
for i in nums:
    dp.append(dp[-1]^i)

print(dp)