nums = [int(i) for i in input().split(" ")]

up = 0

down = 0

for i in range(len(nums)-1):
    if nums[i] < nums[i + 1]:
        up += 1
    elif nums[i] > nums[i + 1]:
        down += 1

if up == len(nums)-1:
    print("Up")
elif down == len(nums)-1:
    print("Down")
else:
    print("Not understand")
