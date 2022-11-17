for _ in range(int(input())):
    input()
    arr = [int(i) for i in input().split()]
    d = {}
    flag = False
    for i in arr:
        try:
            d[i] += 1
            if d[i] == 3:
                print(i)
                flag = True
                break
        except:
            d[i] = 1
    if not flag:
        print(-1)