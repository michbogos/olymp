n = int(input())

nums = [int(i) for i in input().split()]

d = {}

for i in nums:
        try:
            d[i] += 1

        except:
            d[i] = 1

vals = [d[i] for i in d]
mn = sum(nums)/n

m = max(vals)
mx = mn

highest_ammount = []
med = []
med_max = 1e7

wind = 0

for i in d:
    if d[i] == m:
        highest_ammount.append(i)

if len(highest_ammount) > 1:
    for i in highest_ammount:
        if abs(d[i] - mn) < med_max:
            med_max = i

for i in d:
    if abs(d[i] - mn) == med_max:
        med.append(i)
vs = []

if len(med)>1:
    vs = [d[i] for i in med]

if len(highest_ammount) == 1:
    print(highest_ammount[0])
elif len(med)== 1:
    print(med[0])
elif len(vs) > 0:
    print(max(vs))