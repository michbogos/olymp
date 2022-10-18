n = int(input())

d = {}

for i in range(n):
    game, time = [int(i) for i in input().split()]
    try:
        d[game] += time
    except:
        d[game] = time
vals = [d[i] for i in d]

mx = max(vals)

for i in d:
    if d[i] == mx:
        print(i)