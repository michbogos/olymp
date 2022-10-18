n = int(input())

nums = [int(i) for i in input().split()]

print(" ".join([str(i) for i in sorted(nums)]))