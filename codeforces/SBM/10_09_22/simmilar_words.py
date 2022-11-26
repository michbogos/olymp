abc = "abcdefghijklmnopqrstuvwxyz"

for _ in range(int(input())):
    n, m = [int(i) for i in input().split()]
    mn = 10e10
    words = []
    for i in range(n):
        words.append(input())
    for w1 in words:
        for w2 in words:
            if w1 == w2:
                res = 0
                break
            res = 0
            for i in range(m):
                res += abs(abc.index(w1[i])-abc.index(w2[i]))
            if res < mn:
                mn = res
        break
    if mn == 10e10:
        mn = 0
    print(mn)