nums = [int(i) for i in input().split()]

for i in range(2, 11):
    if i not in nums:
        print(i)