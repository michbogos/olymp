import math
n = input()

nums = [int(i) for i in input().split()]

s = math.gcd(nums[0], nums[1])

for i in range(1, len(nums )-1):
    s = math.gcd(s, nums[i + 1])

print(s)
