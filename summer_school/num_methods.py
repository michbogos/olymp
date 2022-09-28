MOD = 998244353

input()

def factorial(n):
    res = 1
    for i in range(1, n+1):
        res *=i
        res%=MOD
    return res

d = {}

nums = [int(i) for i in input().split()]

for num in nums:
    try:
        d[num] += 1
    except:
        d[num] = 1

sol = 1

for i in d:
    sol *= factorial(d[i])
    sol %= MOD

print(sol%MOD)
