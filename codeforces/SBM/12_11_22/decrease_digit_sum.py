for _ in range(int(input())):
    d, s = [int(i) for i in input().split()]
    if sum([int(char) for char in str(d)]) <= s:
        print(0)
        continue
    else:
        pow = 0
        res = 0
        for i in range(18):
            res += 10**pow*(10-d%10)
            d //= 10
            d += 1
            pow += 1
            if sum([int(char) for char in str(d)]) <= s:
                print(res)
                break