for i in range(int(input())):
    nums = [int(i) for i in input().split()]

    count = 0

    val = nums[0]
    del nums[0]

    for i in nums:
        if i > val:
            count += 1

    print(count)