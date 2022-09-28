import math

n = int(input())

matrix = [[1 for _ in range(n)] for _ in range(n)]

for j in range(n):
    row = input()
    for u in range(n):
        if row[u] == ".":
            matrix[j][u] = 1
        else:
            matrix[j][u] = 1 #math.inf

dp = [[0 for i in range(n)] for u in range(n)]
dp[0][0] = 1
for i in range(n+1):
    for j in range(1, n+1):
        #dp[i][j] += dp[i][j-1]
        #dp[i][j] += dp[i-1][j]
        dp[i][j] = dp[i][j-1] + dp[i-1][j]

print(dp[n-1][n-1])
