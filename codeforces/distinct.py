for i in range(int(input())):
    input()
    nums = [int(i) for i in input().split()]
    print(max(0, len(nums) - (len(nums)//2)*2) + len(nums)//2)