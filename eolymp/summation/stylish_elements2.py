n = int(input())

nums = [int(i) for i in input().split()]
d = {}

for i in nums:
    try:
        d[i]+= 1
    except:
        d[i] = 1

vals = [d[i] for i in d]

ref = sorted(d, key=lambda x:d[x])

sol=[]

if 2 not in vals:
    print("NO")
else:
    for i in ref:
        if d[i] > 1:
            sol.append(str(i))

print(" ".join(sol))