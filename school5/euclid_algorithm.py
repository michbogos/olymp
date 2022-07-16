
for i in range(int(input())):
    a, b = [int(i) for i in input().split()]
    c, d = [int(i) for i in input().split()]
    flag = True
    while a > 0 and b > 0:
        if a > b:
            if a%d == 0 and b == d:
                flag = False
                print("YES")
                break
            a %= b
        elif b%c == 0 and a == c:
            flag = False
            print("YES")
            break
        else:
            b %= a
    if flag:
        print("NO")