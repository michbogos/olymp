n, s = [int(i) for i in input().split()]
nums = [int(i) for i in input().split()]

f = False

i = 0
j = len(nums)-1

while i != j:
    if nums[i] + nums[j] == s:
        f = True
        break
    elif nums[i] + nums[j] > s:
        j -= 1
    else: i += 1

if f:
    print("YES")
else: print("NO")