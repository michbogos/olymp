for t in range(int(input())):
    n = int(input())
    nums = len(set([int(i) for i in input().split()]))
    if nums%2 == n%2:
        print(nums)
    else:
        print(nums-1)