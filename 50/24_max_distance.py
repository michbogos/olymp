n, m = [int(i) for i in input().split()]

nums = [int(i) for i in input().split()]

ns = []

for i in nums:
    if min(i, n-i) == n-i:
        ns = (n-i)*-1


nums.sort()

print(nums[-1]+nums[-2])