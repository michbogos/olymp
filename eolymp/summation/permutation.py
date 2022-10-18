nums = [int(i) for i in input().split()]
del nums[0]
last = 0

nums.sort()

for i in nums:
    if (i - last) > 1:
        print(last + 1)
    else:
        last = i

print(0)