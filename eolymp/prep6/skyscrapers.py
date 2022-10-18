n, l, r = [int(i) for i in input().split()]

dynamic = [[[0 for _ in range(r+1)] for _ in range(l+1)] for _ in range(n+1)]

dynamic[1][0][0] = 1
dynamic[2][1][0] = 1
dynamic[2][0][1] = 1

for i in range(3, n+1):
    for j in range(l+1):
        for k in range(r+1):
            dynamic[i][j][k] = dynamic[i-1][j][k] + k