n, s = [int(i) for i in input().split()]
nums = [int(i) for i in input().split()]

f = False

i = 0
j = len(nums)-1
k = 0

for k in range(len(nums)):
    while i != j:
        if nums[i] + nums[j] == s-nums[k]:
            f = True
            break
        elif nums[i] + nums[j] > s-nums[k]:
            j -= 1
        else: i += 1

if f:
    print("YES")
    print(nums[i], nums[j], nums[k])
else: print("NO")