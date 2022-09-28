for i in range(int(input())):
    a, b, m, n = [int(i) for i in input().split()]
    nums = [a+b, a-b]
    dp = [0 for _ in range(n)]
    dp[0] = 1
    dp[1] = 1
    for u in range(2, n):
        nums.append((a*nums[i-1] + b*nums[i])%m)
    for j in range(n):
        for k in range(n):
            if nums[k] < nums[j]:
                dp[j] = dp[k]+1

print(dp)