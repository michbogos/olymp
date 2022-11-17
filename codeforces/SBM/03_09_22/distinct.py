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
    
    while True:
        flag = False
        for i in d:
            if d[i] == 

    print(count)