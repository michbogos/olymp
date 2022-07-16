a,b = input().split(".")

s = 0
ss = 0

for i in a:
    s += int(i)

for i in b:
    ss += int(i)

if s == ss:
    print("Yes")
else:
    print("No")