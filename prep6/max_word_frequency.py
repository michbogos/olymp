d = {}

for i in range(int(input())):
    inp = input()
    try:
        d[inp] += 1
    except:
        d[inp] = 1

m = max([d[key] for key in d])

maxx = []

for key in d:
    if d[key] == m:
        maxx.append(key)
print(sorted(maxx)[-1], m)