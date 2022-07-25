import bisect
s, n = [int(i) for i in input().split()]

books = [int(i) for i in input().split()]

d = {}

for i in books:
    try:
        d[i] += 1
    except:
        d[i] = 1

count = 0

keys = list(d.keys())

for i in range(100):
    f = False
    for key in d:
        d[key] -= 1
        try:
            index = keys.index(s-key)
            if d[keys[index]] > 0:
                count += 1
                f = True
        except:
            pass
    if not f:
        break

print(count)