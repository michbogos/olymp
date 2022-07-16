n = int(input())

nums = [int(i) for i in input().split()]

if nums == sorted(nums):
    print("yes")
else:
    print("no")