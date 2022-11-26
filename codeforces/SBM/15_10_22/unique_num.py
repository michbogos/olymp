for _ in range(int(input())):
    nums = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    res = []
    n = int(input())
    if n > 45:
        print(-1)
    else:
        while n != 0:
            res.append(min(n, max(nums)))
            n -= res[-1]
            del nums[nums.index(res[-1])]
            if len(nums) == 0:
                break
    
        if len(res) > 0:
            print(int("".join([str(i) for i in sorted(res)])))
        else:
            print(-1)