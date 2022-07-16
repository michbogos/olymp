def primes(n):
    primfac = []
    d = 2
    while d*d <= n:
        while (n % d) == 0:
            primfac.append(d)
            n //= d
        d += 1
    if n > 1:
        primfac.append(n)
    return primfac

n = int(input())
sol = []

while n != 0:
    count = 1
    p = primes(n)
    s = set(p)
    for i in s:
        count *= 2*p.count(i) + 1
    count += 1
    count /= 2
    sol.append(" ".join([str(n), str(int(count))]))
    n = int(input())

for i in sol:
    print(i)