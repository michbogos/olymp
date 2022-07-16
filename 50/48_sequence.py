input()

nums = [int(i) for i in input().split(" ")]

count = 1
m = 1

for i in range(len(nums)-1):
    if nums[i + 1] - nums[i] == 1:
        count += 1
        if count > m:
            m = count
    else:
        count = 1

print(m)