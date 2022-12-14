for _ in range(int(input())):
    m = ["" for i in range(9)]
    for i in range(9):
        m.append(input().replace("2","1"))
    for i in m:
        print(i)