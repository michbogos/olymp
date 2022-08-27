input()
nums = sorted([int(i) for i in input().split()])

s = 0

for i in range(len(nums)-1):
    s += nums[i+1]-nums[i]-1

print(s)