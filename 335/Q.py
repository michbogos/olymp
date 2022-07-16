num = input()

s = 0
p = 1

for i in num:
    s += float(i)
    p *= float(i)

print(round(p/s,3))
