for _ in range(int(input())):
    a, b = [int(i) for i in input().split()]
    if a < b:
        tmp = b
        b = a
        a = tmp
    res = ((a-b)//10)
    if (a-b)%10 > 0:
        res += 1 
    print(res)