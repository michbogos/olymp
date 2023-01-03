n = int(input())

def square(n):
    if n == 1:
        return 1
    else:
        return n*2 + max(0, (n-2)*2)

res = 0
intitial = 3*(n - 1)

for i in range(n, 0, -2):
    res += square(i)*intitial
    intitial += 2

print(format(res/(n*n), ".3f"))