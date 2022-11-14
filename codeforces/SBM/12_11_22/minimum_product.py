for _ in range(int(input())):
    a, b, x, y, n = [int(i) for i in input().split()]
    res = 0
    if a < b:
        tmp = a
        a = b
        b = tmp
    res += min(n, (b-y))
    n -= res
    b -= res
    res2 = min(n, (a-x))
    n -= res2
    a -= res2
    print(a*b)