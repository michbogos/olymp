input()

nums = [int(i) for i in input().split()]

nums.sort()

costs = []

while len(nums) > 1:
    costs.append(nums[0] + nums[1])
    tmp = nums[0]
    nums[0] = tmp + nums[1]
    del nums[1]

s = sum(costs)

print(s)
