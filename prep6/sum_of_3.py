n, s = [int(i) for i in input().split()]
nums = sorted([int(i) for i in input().split()])

f = False

i = 0
j = len(nums)-1
k = 0

def sum_of_2(x, arr):
    i = 0
    j = len(arr)-1
    while i != j:
        if arr[i] + arr[j] == x:
            break
        elif arr[i] + arr[j] > x:
            j -= 1
        elif arr[i] + arr[j] < x: i += 1
    return (i, j)

f = False 

for k in range(len(nums)):
    res = sum_of_2(s-nums[k], nums)
    if res[0] != res[1] and k not in res:
        print(nums[res[0]], nums[res[1]], nums[k])
        f = True
        break

if not f:
    print(-1)