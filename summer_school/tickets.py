n = int(input())

vals = []

for i in range(n):
    vals.append([int(i) for i in input().split()])

dp = [0 for i in range(n+1)]

dp[0] = 0
dp[1] = vals[0][0]
dp[2] = min(vals[0][1], vals[0][0] + vals[1][0])

for i in range(3, len(vals)+1):
    #for j in range(len(vals[i])):
    dp[i] = min(dp[i-1] + vals[i-1][0], dp[i-2] + vals[i-2][1], dp[i-3] + vals[i-3][2])

print(dp[-1])