for i in range(int(input())):
    n, m = [int(u) for u in input().split()]
    flag = False
    for i in range(n):
        tile = [[int(j) for j in input().split()] for k in range(2)]
        flag |= tile[0][1] == tile[1][0]
    flag &= m%2==0
    if flag:
        print("YES")
    else:
        print("NO")