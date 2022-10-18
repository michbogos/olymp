input()

nums = [int(i) for i in input().split()]

print(" ".join([str(u) for u in sorted(nums, reverse=True)]))