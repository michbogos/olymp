n = int(input())

nums = [int(i) for i in input().split()]

nums = sorted(nums)

print(" ".join([str(i) for i in nums]))