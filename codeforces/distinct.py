for t in range(int(input())):
    int(input())
    d = {}
    nums = [int(i) for i in input().split()]
    count = 1

    for num in nums:
        try:
            d[num] += 1
        except:
            d[num] = 1
    
    for i in d:
        if d[i]%2 == 1:
            count += 1
        else:
            count -= 1
    
    print(count)