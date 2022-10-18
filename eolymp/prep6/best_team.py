n, s = [int(i) for i in input().split()]
nums = [int(i) for i in input().split()]

i = 0
j = len(nums)-1
m = -1

nums.sort()

while i != j:
    if nums[i] + nums[j] > s:
        if (nums[i] + nums[j] > m) and nums[i] + nums[j] < s:
            m = nums[i] + nums[j]
        j -= 1
    elif nums[i] + nums[j] < s:
        if (nums[i] + nums[j] > m) and nums[i] + nums[j] < s:
            m = nums[i] + nums[j]
        i += 1
    elif nums[i] + nums[j] == s:
        m = nums[i] + nums[j]
        break

print(m)