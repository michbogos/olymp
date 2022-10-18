import math
input()
nums = [int(i) for i in input().split()]

def lcm(a, b):
    return abs(a*b) // math.gcd(a, b)

s = lcm(nums[0], nums[1])

for i in range(1, len(nums )-1):
    s = lcm(s, nums[i + 1])

print(s)
