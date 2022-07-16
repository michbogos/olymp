n = int(input())

nums = [int(i) for i in input().split()]

sol = ["0" for i in range(len(nums))]
i = 0

while len(nums) > 0:
    if i % 2 == 0:
        sol[i] = str(nums.index(min(nums)))
        del nums[nums.index(min(nums))]
    else:
        sol[-(i)] = str(nums.index(min(nums)))
        del nums[nums.index(min(nums))]
    i += 1
print(" ".join(sol))