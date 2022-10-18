nums = [int(i) for i in input().split()]

del nums[nums.index(max(nums))]

del nums[nums.index(min(nums))]

print(max(nums)-min(nums))