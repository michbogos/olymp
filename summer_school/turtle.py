import math
n = int(input())
MOD = 10e9 + 7
inf = -1000000000000000000000000000000

matrix = [[1 for _ in range(n)] for _ in range(n)]

for j in range(n):
    row = input()
    for u in range(n):
        if row[u] == ".":
            matrix[j][u] = 1
        else:
            matrix[j][u] = None

dp = [[1 for i in range(n+1)] for u in range(n+1)]

for i in range(n+1):
    dp[0][i] += dp[0][i-1]
for i in range(n+1):
    dp[i][0] += dp[i-1][0]

for i in range(1, n+1):
    for u in range(1, n+1):
        if dp[i][u-1] == None:
            dp[i][u] = dp[i-1][u]
        elif dp[i-1][u] == None:
            dp[i][u] = dp[i][u-1]
        else:
            dp[i][u] = dp[i-1][u] + dp[i][u-1]

print(dp)