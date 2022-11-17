for _ in range(int(input())):
    n, k = [int(i) for i in input().split()]
    arr = [int(j) for j in input().split()]
    num = 10
    for j in arr:
        num = (j|num)
    res = [c for c in "{0:b}".format(num)]

    for i in range(k):
        try:
            res[res.index('0')] = '1'
        except:
            pass
    
    
    print(int("".join(res), 2))