n, m = [int(i) for i in input().split()]

nums = [int(i) for i in input().split()]

nums = [(n/2)-i for i in nums]

print(abs(max(nums))-abs(min(nums)))