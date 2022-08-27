ammount = [500, 200, 100, 50, 20, 10]
n = int(input())
s = 0

for i in ammount:
    if n//i > 0:
        s+= n//i
        n -= i*(n//i)

if n != 0:
    print(-1)
else:
    print(s)
