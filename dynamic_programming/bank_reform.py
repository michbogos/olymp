coins = [1, 5, 10, 25, 50]

while True:
    n = int(input())
    reprs = [0 for i in range(n+1)]
    reprs[0] = 1
    for i in range(len(coins)):
        for u in range(coins[i], n+1):
            reprs[u] += reprs[u-coins[i]]
    print(reprs[-1])