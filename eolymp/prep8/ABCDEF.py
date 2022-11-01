input()
arr = [int(i) for i in input().split()]
abc = {}
dfe = {}
count = 0
for a in arr:
    for b in arr:
        for c in arr:
            try:
                abc[a*b+c] += 1
            except:
                abc[a*b+c] = 1
for d in arr:
    for e in arr:
        for f in arr:
            try:
                dfe[(f+e)*d] += 1
            except:
                dfe[(f+e)*d] = 1

print(sum([abc[i] * dfe[i] for i in set(abc.keys()).intersection(set(dfe.keys()))]))