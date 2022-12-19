for _ in range(int(input())):
    m = []
    for _ in range(2):
        m.append([int(i) for i in input().split()])
    f= False
    for r in range(4):
        if m[0][0] < m[1][0] and m[0][1] < m[1][1] and m[1][0] < m[1][1] and m[0][0] < m[0][1]:
            print("YES")
            f = True
            break
        m = list(list(x) for x in zip(*m))[::-1]
    if not f:
        print("NO")
    