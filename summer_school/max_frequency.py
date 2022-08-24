d = {}

for i in range(int(input())):
    s = input()
    try:
        d[s] += 1
    except:
        d[s] = 1

m = 0
s = ""

for i in d:
    m = max(d[i], m)

mm = []

for i in d:
    if d[i] == m:
        mm.append(i)

print(sorted(mm)[-1], m)