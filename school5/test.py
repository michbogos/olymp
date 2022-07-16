import math
nums = [int(i) for i in input().split()]

print(int(sum([i / math.gcd(*nums) for i in nums])))