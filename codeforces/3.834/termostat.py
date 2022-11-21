for _ in range(int(input())):
    l, r, x = [int(i) for i in input().split()]
    a, b = [int(i) for i in input().split()]
    if b > r or b < l:
        print(-1)
        continue
    if b ==a:
        print(0)
        continue
    print((abs(b-a)+x-1)//x)