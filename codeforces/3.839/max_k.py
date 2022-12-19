def construct(f, k):
    return [(i + 2 if i < f - 1 else 1) for i in range(k)]

t = int(input())
for i in range(t):
    k, n = map(int, input().split())
    ans = 1
    for f in range(1, k):
        d = construct(f, k - 1)
        if sum(d) <= n - 1:
            ans = f
    res = [1]
    d = construct(ans, k - 1)
    for x in d:
        res.append(res[-1] + x)
    print(*res)