n = int(input())

nums = [int(i) for i in input().split()]

m = max(nums)
s = []

for i in range(len(nums)):
    if nums[i] != m:
        s.append(nums[i])

print(sum(s))
